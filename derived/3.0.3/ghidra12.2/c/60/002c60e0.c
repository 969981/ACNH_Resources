
void FUN_002c60e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined **local_b0;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined4 local_80 [8];
  
  lVar2 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) != lVar2) {
    lVar8 = *(long *)(param_1 + 0x10);
    do {
      while( true ) {
        lVar3 = lVar8 + 0x10;
        iVar4 = FUN_002b43fc(lVar3);
        iVar5 = FUN_002b43fc(param_2);
        if (iVar4 == iVar5) break;
        iVar4 = FUN_002b43fc(lVar3);
        iVar5 = FUN_002b43fc(param_2);
        if (iVar4 != iVar5) {
          FUN_002b4378(&local_88,lVar3);
          FUN_002b4378(&local_b0,param_2);
          uVar6 = FUN_002200e4(local_80,auStack_a8);
          local_b0 = &PTR_LAB_04840580;
          FUN_0021f584(auStack_a8);
          local_88 = &PTR_LAB_04840580;
          FUN_0021f584(local_80);
          if ((uVar6 & 1) != 0) break;
        }
        plVar1 = (long *)(lVar8 + 8);
        lVar8 = *plVar1;
        if (*plVar1 == lVar2) {
          return;
        }
      }
      local_80[0] = 0;
      local_88 = (undefined **)0x40000;
      FUN_002b493c(lVar3,&local_88);
      lVar7 = *(long *)(lVar8 + 8);
      FUN_002b4104(lVar3);
      FUN_00223704(lVar2,lVar8);
      FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar8 + *(int *)(param_1 + 0x34));
      lVar8 = lVar7;
    } while (lVar7 != lVar2);
  }
  return;
}

