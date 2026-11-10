
void FUN_002ca0a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined **local_b0;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined4 local_80 [8];
  
  lVar1 = param_1 + 8;
  if (*(long *)(param_1 + 0x10) != lVar1) {
    lVar6 = *(long *)(param_1 + 0x10);
    do {
      while( true ) {
        iVar3 = FUN_002b43fc(lVar6 + 0x18);
        iVar4 = FUN_002b43fc(param_2);
        if (iVar3 == iVar4) break;
        FUN_002b4378(&local_88,lVar6 + 0x18);
        FUN_002b4378(&local_b0,param_2);
        uVar5 = FUN_002200e4(local_80,auStack_a8);
        local_b0 = &PTR_LAB_04840580;
        FUN_0021f584(auStack_a8);
        local_88 = &PTR_LAB_04840580;
        FUN_0021f584(local_80);
        if ((uVar5 & 1) == 0) break;
        local_80[0] = 0;
        local_88 = (undefined **)0x40000;
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))(lVar6 + 0x10,&local_88);
        lVar2 = *(long *)(lVar6 + 8);
        (*(code *)**(undefined8 **)(lVar6 + 0x10))(lVar6 + 0x10);
        FUN_00223704(lVar1,lVar6);
        FUN_002236e0(param_1 + 0x20,param_1 + 0x20,lVar6 + *(int *)(param_1 + 0x34));
        lVar6 = lVar2;
        if (lVar2 == lVar1) {
          return;
        }
      }
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != lVar1);
  }
  return;
}

