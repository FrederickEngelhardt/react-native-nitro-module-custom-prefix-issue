import { NitroModules } from 'react-native-nitro-modules'
import type { NitroMath as NitroMathSpec } from './specs/nitro-math.nitro'

export const NitroMath =
  NitroModules.createHybridObject<NitroMathSpec>('NitroMath')