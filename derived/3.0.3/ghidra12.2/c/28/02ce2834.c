
void FUN_02ce2834(long param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long *plVar4;
  uint *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 *puVar8;
  
  if (((int)*(uint *)(param_1 + 0x68a50) < 0) || (*(uint *)(param_1 + 0x68a50) != param_3)) {
    iVar1 = *(int *)(param_1 + 0x68a54);
    if ((iVar1 < 0) ||
       ((uVar2 = param_3 - iVar1, (int)param_3 < iVar1 ||
        (*(int *)(param_1 + 0x148) + iVar1 <= (int)param_3)))) {
      iVar1 = *(int *)(param_1 + 0x68a58);
      if ((iVar1 < 0) || ((int)param_3 < iVar1)) {
LAB_02ce2960:
        iVar1 = *(int *)(param_1 + 0x68a5c);
        if ((-1 < iVar1) && (iVar1 <= (int)param_3)) {
          plVar4 = (long *)(param_1 + 0xf008);
          piVar3 = (int *)(**(code **)(*plVar4 + 0x18))(plVar4);
          if ((int)param_3 < *piVar3 + iVar1) {
            iVar1 = *(int *)(param_1 + 0x68a5c);
            piVar3 = (int *)(**(code **)(*plVar4 + 0x18))(plVar4);
            if (*piVar3 != 0) {
              param_3 = param_3 - iVar1;
              piVar3 = (int *)(**(code **)(*plVar4 + 0x18))(plVar4);
              if (param_3 <= *piVar3 - 1U) {
                lVar7 = *plVar4;
                goto LAB_02ce2a14;
              }
            }
            goto LAB_02ce29d8;
          }
        }
        *(undefined2 *)param_2 = DAT_05586008;
        *(undefined1 *)((long)param_2 + 2) = DAT_0558600a;
        *(undefined1 *)((long)param_2 + 3) = DAT_0558600b;
        uVar6 = DAT_0558600c;
        goto LAB_02ce2a44;
      }
      plVar4 = (long *)(param_1 + 0x158);
      piVar3 = (int *)(**(code **)(*(long *)(param_1 + 0x158) + 0x18))(plVar4);
      if (*piVar3 + iVar1 <= (int)param_3) goto LAB_02ce2960;
      iVar1 = *(int *)(param_1 + 0x68a58);
      piVar3 = (int *)(**(code **)(*plVar4 + 0x18))(plVar4);
      if (*piVar3 == 0) {
LAB_02ce29d8:
        puVar8 = (undefined4 *)&DAT_05586008;
      }
      else {
        param_3 = param_3 - iVar1;
        piVar3 = (int *)(**(code **)(*plVar4 + 0x18))(plVar4);
        if (*piVar3 - 1U < param_3) goto LAB_02ce29d8;
        lVar7 = *plVar4;
LAB_02ce2a14:
        puVar5 = (uint *)(**(code **)(lVar7 + 0x18))(plVar4);
        if (param_3 < *puVar5) {
          lVar7 = *(long *)(*(long *)(puVar5 + 2) + (long)(int)param_3 * 8);
        }
        else {
          lVar7 = 0;
        }
        puVar8 = (undefined4 *)(lVar7 + 4);
      }
    }
    else {
      puVar8 = (undefined4 *)(param_1 + 0xf8) + (ulong)uVar2 * 2;
      if (9 < uVar2) {
        puVar8 = (undefined4 *)(param_1 + 0xf8);
      }
      if (*(int *)(param_1 + 0x148) <= (int)uVar2 || 0x7fffffff < uVar2) {
        puVar8 = (undefined4 *)PTR_DAT_04bb37e0;
      }
    }
  }
  else {
    puVar8 = (undefined4 *)(param_1 + 0x30) + (ulong)param_3 * 2;
    if (2 < param_3) {
      puVar8 = (undefined4 *)(param_1 + 0x30);
    }
    if (*(int *)(param_1 + 0x48) <= (int)param_3) {
      puVar8 = (undefined4 *)&DAT_05586008;
    }
  }
  uVar6 = puVar8[1];
  *param_2 = *puVar8;
LAB_02ce2a44:
  param_2[1] = uVar6;
  return;
}

