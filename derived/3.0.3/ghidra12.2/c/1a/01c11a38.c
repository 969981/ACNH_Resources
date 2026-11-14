
void FUN_01c11a38(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_80 [2];
  long local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    iVar2 = 0;
    if (*param_2 != -1) {
      iVar2 = *param_2;
    }
    lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,iVar2);
    if (lVar4 != 0) {
      if ((*(long **)(lVar4 + 0x17f68) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      lVar1 = *(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48);
      local_78 = lVar1 + 4;
      local_80[0] = 10;
      (**(code **)(*param_1 + 0x38))(param_1);
      local_58 = 0;
      uStack_50 = 0;
      local_60 = 0;
      local_48 = 1;
      local_44 = 0;
      local_70 = PTR_DAT_04bc0cd8 + 0x10;
      uStack_68 = 0;
      FUN_02906b00(&local_70,param_1,local_80);
      iVar2 = *(int *)(lVar1 + 0x18);
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x40))(param_1);
      uVar7 = 1;
      if (iVar2 == 1) {
        uVar7 = 2;
      }
      *puVar6 = uVar7;
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return;
}

