
void FUN_03679fa4(long *param_1,undefined8 param_2)

{
  undefined1 local_58 [2];
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_24 [2];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0xc) = 100;
  *(undefined4 *)((long)param_1 + 0x14) = 0x40400000;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x200007d00;
  *(undefined1 *)((long)param_1 + 0x108d) = 0;
  *param_1 = (long)&PTR_FUN_04bb13a0;
  param_1[6] = 4;
  param_1[7] = 0x3f80000000000200;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0x3f80a3d73f81eb85;
  param_1[9] = 0x3f7c28f63f7eb852;
  param_1[10] = 0x100000000800;
  memset(param_1 + 0xb,0,0x1032);
  *(undefined1 *)((long)param_1 + 0x108a) = 0;
  *(undefined1 *)((long)param_1 + 0x108b) = 0;
  *(undefined1 *)((long)param_1 + 0x108c) = 0;
  *(undefined1 *)((long)param_1 + 0x108d) = 0;
  *param_1 = (long)(PTR_DAT_04bcaa90 + 0x10);
  nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)(param_1 + 0x212));
  nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)(param_1 + 0x16200));
  param_1[0x16a3a] = 0;
  *(undefined1 *)(param_1 + 0x16224) = 0;
  *(undefined1 *)(param_1 + 0x16a3b) = 0;
  param_1[0x16209] = 0;
  param_1[0x1620a] = 0;
  param_1[0x1621e] = 0;
  param_1[0x1621c] = 0;
  param_1[0x1621d] = 0;
  *(undefined8 *)((long)param_1 + 0xb51c4) = 0x6400000064;
  *param_1 = (long)&PTR_FUN_04b42c70;
  *(undefined4 *)(param_1 + 0x16a42) = 0;
  param_1[0x16a3c] = 0;
  param_1[0x16a3d] = 0;
  param_1[0x16a3e] = 0;
  param_1[0x16a3f] = 0;
  param_1[0x16a40] = 0;
  param_1[0x16a41] = 0;
  nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)(param_1 + 0x16a43));
  *(undefined1 *)((long)param_1 + 0xb5294) = 0;
  param_1[0x16a4e] = 0;
  *(undefined4 *)(param_1 + 0x16a4f) = 0;
  *(undefined1 *)((long)param_1 + 0xb527c) = 0;
  *(undefined2 *)((long)param_1 + 0xb527e) = 0;
  param_1[0x16a51] = (long)param_1 + 0xb5294;
  *(undefined4 *)(param_1 + 0x16a52) = 0x40;
  *(undefined1 *)((long)param_1 + 0xb52d3) = 0;
  local_58[0] = 0;
  local_56 = 100;
  local_48 = 0x100;
  param_1[0x16a50] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  local_54 = 0x1000;
  local_50 = param_2;
  FUN_0367f904(param_1 + 0x16a3c,local_58);
  nn::audio::SetAuxLightLimiterParameters
            ((AuxLightLimiterType *)(param_1 + 0x16a4c),(LightLimiterParameterSet *)&DAT_04198dd8);
  local_24[0] = 0x100;
  nn::audio::SetAuxLightLimiterInputOutput
            ((AuxLightLimiterType *)(param_1 + 0x16a4c),(signed *)local_24,(signed *)local_24,2);
  return;
}

