
void FUN_018023cc(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  iVar1 = *param_2;
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar5 + 7) == iVar1) && (uVar3 = FUN_0180c3b0(), (uVar3 & 1) != 0)) {
    FUN_018024bc(param_2);
    FUN_01803570(param_2);
    lVar4 = DAT_05292338 + 0xda0;
    FUN_017ecd6c(lVar4);
    FUN_017fdd9c(lVar4);
    return;
  }
  FUN_018024bc(param_2);
  FUN_01803570(param_2);
  return;
}

