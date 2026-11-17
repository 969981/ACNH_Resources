
void FUN_02a55914(float *param_1,float *param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  
  puVar2 = PTR_PTR_04bb4f70;
  lVar1 = 0x19d708;
  if ((param_3 & 1) == 0) {
    lVar1 = 0x19d148;
  }
  lVar1 = *(long *)PTR_DAT_04bb26a8 + lVar1;
  fVar3 = *(float *)(lVar1 + 8);
  fVar4 = *param_2 / fVar3;
  (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(lVar1 + 0x20) * 8))
            (fVar4,(byte *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x18));
  *param_1 = fVar3;
  (**(code **)(puVar2 + (ulong)*(byte *)(lVar1 + 0xd0) * 8))
            (fVar4,(byte *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 200));
  param_1[1] = fVar3;
  return;
}

