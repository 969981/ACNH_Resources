
void FUN_03920070(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x30);
    if (param_2 == 0xffffffff) {
      uVar10 = 0;
      do {
        FUN_0391ee00(*(undefined8 *)(lVar9 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3))
                    );
        uVar1 = uVar10 + 1;
        uVar10 = uVar1 & 0xffffffff;
      } while (iVar3 != (int)uVar1);
    }
    else {
      uVar10 = 0;
      do {
        uVar2 = param_2;
        if (*(uint *)(param_1 + 0x50) <= param_2) {
          uVar2 = 0;
        }
        lVar11 = *(long *)(param_1 + 0x58) + (long)(int)uVar2 * 0x168;
        plVar4 = (long *)(**(code **)(*(long *)(*(long *)(lVar9 + (-(uVar10 >> 0x1f) &
                                                                   0xfffffff800000000 | uVar10 << 3)
                                                         ) + 0x30) + 0x18))();
        plVar7 = (long *)(lVar11 + 0x18);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        puVar12 = (undefined8 *)(lVar11 + 0x20);
        pcVar8 = (char *)*puVar12;
        (**(code **)(*plVar4 + 0x18))(plVar4);
        pcVar6 = (char *)plVar4[1];
        if (pcVar8 == pcVar6) {
LAB_039200c0:
          FUN_0391ee00(*(undefined8 *)(lVar9 + (long)(int)uVar10 * 8));
        }
        else {
          pcVar8 = (char *)*puVar12;
          if (*pcVar8 == *pcVar6) {
            if (*pcVar8 != '\0') {
              uVar1 = 0;
              do {
                uVar5 = uVar1;
                if (pcVar8[uVar5 + 1] != pcVar6[uVar5 + 1]) goto LAB_039200cc;
                if (pcVar8[uVar5 + 1] == '\0') goto joined_r0x039201d8;
                if (pcVar8[uVar5 + 2] != pcVar6[uVar5 + 2]) goto LAB_039200cc;
                if (pcVar8[uVar5 + 2] == '\0') {
                  uVar5 = uVar5 + 1;
                  goto joined_r0x039201d8;
                }
                if ((uVar5 == 0x7fffe) || (pcVar8[uVar5 + 3] != pcVar6[uVar5 + 3]))
                goto LAB_039200cc;
                uVar1 = uVar5 + 3;
              } while (pcVar8[uVar5 + 3] != '\0');
              uVar5 = uVar5 + 2;
joined_r0x039201d8:
              if (uVar5 >> 0x13 != 0) goto LAB_039200cc;
            }
            goto LAB_039200c0;
          }
        }
LAB_039200cc:
        uVar1 = uVar10 + 1;
        uVar10 = uVar1 & 0xffffffff;
      } while (iVar3 != (int)uVar1);
    }
  }
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 1;
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 1;
  return;
}

