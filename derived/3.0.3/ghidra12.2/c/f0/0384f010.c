
void FUN_0384f010(uint *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  
  uVar3 = *param_1;
  if (0 < (int)uVar3) {
    uVar10 = 0;
    do {
      lVar6 = *(long *)(param_1 + 2);
      lVar7 = lVar6 + uVar10 * 0xe8;
      pvVar8 = *(void **)(lVar7 + 8);
      (**(code **)(*param_2 + 0x18))(param_2);
      pvVar9 = (void *)param_2[1];
      if (pvVar8 != pvVar9) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar5 = 0;
        do {
          if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0384f14c;
          lVar1 = param_2[1] + lVar5;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_0384f14c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_0384f14c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_0384f14c:
        iVar2 = (int)lVar5;
        if (*(int *)(lVar7 + 0x10) <= (int)lVar5) {
          iVar2 = *(int *)(lVar7 + 0x10) + -1;
        }
        memcpy(pvVar8,pvVar9,(long)iVar2);
        *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
      }
      *(int *)(lVar7 + 0x58) = (int)param_2[0xb];
      pvVar8 = *(void **)(lVar6 + uVar10 * 0xe8 + 0x68);
      (**(code **)(param_2[0xc] + 0x18))(param_2 + 0xc);
      pvVar9 = (void *)param_2[0xd];
      if (pvVar8 != pvVar9) {
        (**(code **)(param_2[0xc] + 0x18))(param_2 + 0xc);
        lVar7 = 0;
        do {
          if (*(char *)(param_2[0xd] + lVar7) == '\0') goto LAB_0384f068;
          lVar5 = param_2[0xd] + lVar7;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_0384f068;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_0384f068;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_0384f068:
        iVar4 = *(int *)(lVar6 + uVar10 * 0xe8 + 0x70);
        iVar2 = (int)lVar7;
        if (iVar4 <= (int)lVar7) {
          iVar2 = iVar4 + -1;
        }
        memcpy(pvVar8,pvVar9,(long)iVar2);
        *(undefined1 *)((long)pvVar8 + (long)iVar2) = 0;
      }
      lVar6 = lVar6 + uVar10 * 0xe8;
      uVar10 = uVar10 + 1;
      *(int *)(lVar6 + 0xb8) = (int)param_2[0x17];
      *(long *)(lVar6 + 0xc0) = param_2[0x18];
      lVar7 = param_2[0x19];
      lVar5 = param_2[0x1a];
      lVar1 = param_2[0x1c];
      *(long *)(lVar6 + 0xd8) = param_2[0x1b];
      *(long *)(lVar6 + 0xe0) = lVar1;
      *(long *)(lVar6 + 200) = lVar7;
      *(long *)(lVar6 + 0xd0) = lVar5;
    } while (uVar10 != uVar3);
  }
  return;
}

