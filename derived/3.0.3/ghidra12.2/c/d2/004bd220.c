
void FUN_004bd220(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_38;
  
  local_38 = FUN_0047a0b0(*(undefined8 *)(param_1 + 0x10));
  lVar5 = FUN_0047cc50((long *)(param_1 + 0x110),&local_38);
  puVar4 = PTR_DAT_048607b8;
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x110);
    if (lVar7 + (long)*(int *)(lVar5 + 4) * 0x18 != 0) {
      lVar7 = lVar7 + (long)*(int *)(lVar5 + 4) * 0x18;
      iVar3 = *(int *)(lVar7 + 0x10);
      if (iVar3 != 0) {
        piVar8 = *(int **)(lVar7 + 8);
        piVar1 = piVar8 + iVar3;
        uVar6 = *(uint *)(param_4 + 1);
        do {
          iVar3 = *piVar8;
          if ((int)uVar6 < 1) {
LAB_004bd2cc:
            if (uVar6 == (*(uint *)((long)param_4 + 0xc) & 0x3fffffff)) {
              FUN_00426990(puVar4,param_4,4);
              uVar6 = *(uint *)(param_4 + 1);
            }
            *(int *)(*param_4 + (long)(int)uVar6 * 4) = iVar3;
            uVar6 = uVar6 + 1;
            *(uint *)(param_4 + 1) = uVar6;
          }
          else {
            lVar5 = 0;
            do {
              iVar2 = *(int *)(*param_4 + lVar5 * 4);
              lVar5 = lVar5 + 1;
            } while (iVar2 != iVar3 && lVar5 < (int)uVar6);
            if (iVar2 != iVar3) goto LAB_004bd2cc;
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar1);
      }
    }
  }
  return;
}

