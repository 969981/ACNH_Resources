
void FUN_0153ee48(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 auStack_3c [12];
  
  FUN_0153ecc4(auStack_3c,param_5);
  if (DAT_05aed670 == 0) {
    puVar2 = &DAT_055c04a0;
  }
  else {
    puVar2 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar2 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar1 = FUN_006bd550(*puVar2,0);
      puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar2 = &DAT_055c04a0;
      }
    }
  }
  fVar3 = (float)FUN_0153e900(auStack_3c,param_5,*(undefined4 *)(puVar2 + 7));
  *(uint *)(param_4 + 8) = (int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0);
  *(uint *)(param_4 + 0xc) = (int)((float)(int)param_3 / 5.0) - (uint)(param_3 < 0.0);
  return;
}

