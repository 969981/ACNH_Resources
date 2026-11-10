
void FUN_00343db0(long param_1,void *param_2,int param_3,long param_4,undefined8 param_5,
                 long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  memset(param_2,0,(long)param_3 * 0x9d0);
  *(void **)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x1e0) = param_7;
  *(long *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  uVar6 = *(undefined8 *)(param_4 + 0x1e0);
  iVar4 = 2;
  if (*(char *)(param_4 + 0x58) != '\0') {
    iVar4 = 3;
  }
  local_60 = 0;
  uStack_58 = 0;
  FUN_0034fb50(&local_60);
  local_60 = CONCAT44(0x10,(undefined4)local_60);
  lVar2 = FUN_00347a58(uVar6,&local_60);
  lVar1 = param_1 + 0x30;
  lVar2 = (lVar2 + 0xdfU & -lVar2) * (long)(*(int *)(param_1 + 0x10) * iVar4);
  uVar3 = FUN_00334414(lVar1,*(undefined8 *)(param_4 + 0x1e0),*(long *)(param_1 + 0x20) + 0x1e8,0x10
                       ,lVar2);
  if ((uVar3 & 1) != 0) {
    FUN_00347d1c(lVar1,param_1 + 0x1b8);
  }
  *(long *)(param_1 + 0x1d8) = lVar2;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  uVar6 = FUN_00347cc4(lVar1);
  *(undefined8 *)(param_1 + 0x1d0) = uVar6;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar4 = 0;
    plVar7 = (long *)(*(long *)(param_1 + 8) + 0x750);
    do {
      FUN_0033155c(plVar7 + -0xd5);
      FUN_0031eba0(plVar7 + 0x1d);
      FUN_0031eba0(plVar7 + 0x26);
      FUN_0031eba0(plVar7 + 0x2f);
      FUN_0031eba0(plVar7 + 0x38);
      FUN_0031eba0(plVar7 + 0x41);
      plVar7[8] = 0;
      lVar2 = 0;
      plVar7[0x4b] = (long)&PTR_LAB_0484b590;
      plVar7[0x4c] = 0;
      plVar7[0x4d] = 0;
      *(undefined4 *)(plVar7 + 0x4e) = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = lVar1;
      lVar5 = *(long *)(param_1 + 0x1c8);
      uVar3 = (*(long *)(param_1 + 0x198) + 0xdfU & -*(long *)(param_1 + 0x198)) + lVar5;
      if (uVar3 <= *(ulong *)(param_1 + 0x1a0)) {
        *(ulong *)(param_1 + 0x1c8) = uVar3;
        lVar2 = *(long *)(param_1 + 0x1d0) + lVar5;
      }
      *plVar7 = lVar2;
      lVar2 = 0;
      lVar5 = *(long *)(param_1 + 0x1c8);
      uVar3 = (*(long *)(param_1 + 0x198) + 0xdfU & -*(long *)(param_1 + 0x198)) + lVar5;
      if (uVar3 <= *(ulong *)(param_1 + 0x1a0)) {
        *(ulong *)(param_1 + 0x1c8) = uVar3;
        lVar2 = *(long *)(param_1 + 0x1d0) + lVar5;
      }
      plVar7[1] = lVar2;
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x58) == '\0') {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        lVar5 = *(long *)(param_1 + 0x1c8);
        uVar3 = (*(long *)(param_1 + 0x198) + 0xdfU & -*(long *)(param_1 + 0x198)) + lVar5;
        if (uVar3 <= *(ulong *)(param_1 + 0x1a0)) {
          *(ulong *)(param_1 + 0x1c8) = uVar3;
          lVar2 = *(long *)(param_1 + 0x1d0) + lVar5;
        }
      }
      plVar7[2] = lVar2;
      iVar4 = iVar4 + 1;
      plVar7[8] = param_6;
      plVar7 = plVar7 + 0x13a;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  FUN_00347cdc(lVar1,0,*(undefined8 *)(param_1 + 0x1a0));
  FUN_00347cd8(lVar1);
  return;
}

