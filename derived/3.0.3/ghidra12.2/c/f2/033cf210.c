
void FUN_033cf210(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar8 = *(uint *)(param_1 + 0x10);
    if (uVar1 < uVar8) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    else {
      if (*(long *)(DAT_05739190 + 0x30) != 0) {
        plVar7 = (long *)(*(long *)(DAT_05739190 + 0x30) + 0xf0);
        iVar2 = *(int *)(param_1 + 0x498);
        iVar4 = (**(code **)(*plVar7 + 0x168))(plVar7);
        if (iVar2 < iVar4) {
          lVar5 = (**(code **)(*plVar7 + 0x158))(plVar7,iVar2);
        }
        else {
          lVar5 = 0;
        }
        uVar3 = *(undefined4 *)(param_1 + 0x49c);
        (**(code **)(*plVar7 + 0x168))(plVar7);
        lVar6 = (**(code **)(*plVar7 + 0x158))(plVar7,uVar3);
        lVar5 = *(long *)(lVar5 + 0x28);
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar6 + 0x28);
          plVar7 = *(long **)(param_1 + 0x40);
          if (lVar6 != 0 && plVar7 != (long *)0x0) {
            do {
              (**(code **)(*plVar7 + 0xa0))((float)uVar8 / (float)uVar1,plVar7,lVar5,lVar6);
              lVar5 = *(long *)(lVar5 + 0x10);
              if ((lVar5 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) break;
              plVar7 = (long *)plVar7[2];
            } while (plVar7 != (long *)0x0);
          }
        }
        *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x1000000;
        (**(code **)(*(long *)(param_1 + 0x18) + 0xa8))(param_1 + 0x18);
        uVar8 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x10) = uVar8 + 1;
    }
  }
  return;
}

