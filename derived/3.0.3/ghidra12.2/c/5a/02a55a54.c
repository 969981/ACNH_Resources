
void FUN_02a55a54(float *param_1,float *param_2,uint param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  puVar2 = PTR_PTR_04bb4f70;
  lVar3 = *(long *)PTR_DAT_04bb26a8;
  pcVar1 = FUN_0019d9e8;
  if ((param_3 & 1) == 0) {
    pcVar1 = (code *)0x19d428;
  }
  fVar4 = *(float *)(pcVar1 + lVar3 + 8);
  fVar5 = *param_2 / fVar4;
  (**(code **)(PTR_PTR_04bb4f70 + (ulong)(byte)pcVar1[lVar3 + 0x20] * 8))
            (fVar5,pcVar1 + lVar3 + 0x20,*(undefined8 *)(pcVar1 + lVar3 + 0x18));
  *param_1 = fVar4;
  (**(code **)(puVar2 + (ulong)(byte)pcVar1[lVar3 + 0xd0] * 8))
            (fVar5,pcVar1 + lVar3 + 0xd0,*(undefined8 *)(pcVar1 + lVar3 + 200));
  param_1[1] = fVar4;
  return;
}

