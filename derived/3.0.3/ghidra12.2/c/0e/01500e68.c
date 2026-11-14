
bool FUN_01500e68(long param_1,long param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float local_4c [3];
  
  bVar1 = param_3 - 2U < 4;
  bVar2 = DAT_05292338 != 0;
  if (bVar1 && bVar2) {
    fVar7 = 2.5;
    local_4c[1] = 0.0;
    local_4c[2] = (float)*(int *)(param_2 + 0xc) * 5.0 + 2.5;
    local_4c[0] = (float)*(int *)(param_2 + 8) * 5.0 + 2.5;
    lVar4 = *(long *)PTR_DAT_04bb2720;
    if (lVar4 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(lVar4 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
        iVar3 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    fVar6 = (float)FUN_0153e6b0(local_4c,param_3,*(undefined4 *)(puVar5 + 7));
    *(uint *)(param_1 + 8) = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    *(uint *)(param_1 + 0xc) = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  }
  return bVar1 && bVar2;
}

