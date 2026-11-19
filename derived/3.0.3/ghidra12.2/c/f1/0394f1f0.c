
void FUN_0394f1f0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar9 + *(int *)(param_1 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0x50);
      if (uVar2 == 0xffffffff) {
LAB_0394f230:
        (**(code **)(*(long *)*puVar9 + 0x28))();
      }
      else {
        if (*(uint *)(param_1 + 0x18) <= uVar2) {
          uVar2 = 0;
        }
        lVar10 = *(long *)(param_1 + 0x20) + (long)(int)uVar2 * 0x168;
        plVar4 = (long *)(**(code **)(*(long *)*puVar9 + 0x18))();
        plVar7 = (long *)(lVar10 + 0x18);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        puVar11 = (undefined8 *)(lVar10 + 0x20);
        pcVar8 = (char *)*puVar11;
        (**(code **)(*plVar4 + 0x18))(plVar4);
        pcVar6 = (char *)plVar4[1];
        if (pcVar8 == pcVar6) goto LAB_0394f230;
        pcVar8 = (char *)*puVar11;
        if (*pcVar8 == *pcVar6) {
          if (*pcVar8 != '\0') {
            uVar3 = 0;
            do {
              uVar5 = uVar3;
              if (pcVar8[uVar5 + 1] != pcVar6[uVar5 + 1]) goto LAB_0394f240;
              if (pcVar8[uVar5 + 1] == '\0') goto joined_r0x0394f358;
              if (pcVar8[uVar5 + 2] != pcVar6[uVar5 + 2]) goto LAB_0394f240;
              if (pcVar8[uVar5 + 2] == '\0') {
                uVar5 = uVar5 + 1;
                goto joined_r0x0394f358;
              }
              if ((uVar5 == 0x7fffe) || (pcVar8[uVar5 + 3] != pcVar6[uVar5 + 3])) goto LAB_0394f240;
              uVar3 = uVar5 + 3;
            } while (pcVar8[uVar5 + 3] != '\0');
            uVar5 = uVar5 + 2;
joined_r0x0394f358:
            if (uVar5 >> 0x13 != 0) goto LAB_0394f240;
          }
          goto LAB_0394f230;
        }
      }
LAB_0394f240:
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}

