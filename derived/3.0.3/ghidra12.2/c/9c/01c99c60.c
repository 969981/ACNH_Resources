
void FUN_01c99c60(int *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  void *__src;
  void *__dest;
  int iVar14;
  ulong uVar15;
  
  plVar1 = (long *)(param_2 + 8);
  plVar3 = plVar1 + *(uint *)(param_2 + 0x18);
  if (1 < *(uint *)(param_2 + 0x18)) {
    plVar3 = plVar1;
  }
  lVar11 = *plVar3;
  if (0 < *(int *)(lVar11 + 0x20)) {
    uVar15 = 0;
    do {
      if (uVar15 < *(uint *)(lVar11 + 0x10)) {
        __src = *(void **)(*(long *)(lVar11 + 0x18) + uVar15 * 8);
        cVar5 = *(char *)((long)__src + 0xdf8);
      }
      else {
        __src = (void *)0x0;
        cVar5 = cRam0000000000000df8;
      }
      if ((cVar5 != '\0') && (iVar4 = *param_1, iVar4 != 0)) {
        iVar14 = 0;
        lVar13 = *(long *)PTR_DAT_04bb21d0;
        lVar11 = *(long *)(param_1 + 2);
        do {
          if ((*(byte *)(lVar13 + 0x188) & 1) == 0) {
LAB_01c99e10:
            __dest = (void *)(lVar11 + (long)iVar14 * 0x1040);
            pcVar2 = (char *)(lVar11 + (long)iVar14 * 0x1040 + 0x103c);
            if (*pcVar2 != '\0') {
              iVar7 = *(int *)(*(long *)(DAT_05aec400 + 0x3d8) + 0x10);
              if (iVar7 == 2) {
                iVar7 = FUN_00241220(__dest);
              }
              else if (iVar7 == 1) {
                iVar7 = FUN_0024d6a4(__dest);
              }
              else if (iVar7 == 0) {
                iVar7 = FUN_0030a228(__dest);
              }
              else {
                iVar7 = 0;
              }
              iVar8 = *(int *)(*(long *)(DAT_05aec400 + 0x3d8) + 0x10);
              if (iVar8 == 2) {
                iVar8 = FUN_00241220(__src);
joined_r0x01c99ee0:
                if (iVar7 == iVar8) break;
              }
              else {
                if (iVar8 == 1) {
                  iVar8 = FUN_0024d6a4(__src);
                  goto joined_r0x01c99ee0;
                }
                if (iVar8 == 0) {
                  iVar8 = FUN_0030a228(__src);
                  goto joined_r0x01c99ee0;
                }
                if (iVar7 == 0) break;
              }
              if (*pcVar2 != '\0') goto LAB_01c99d84;
            }
            puVar9 = *(undefined8 **)(param_1 + 4);
            if ((puVar9 == (undefined8 *)0x0) ||
               (uVar10 = (**(code **)*puVar9)(puVar9,__src), (uVar10 & 1) != 0)) {
              memcpy(__dest,__src,0xbe8);
              memcpy((void *)((long)__dest + 0xbe8),(void *)((long)__src + 0xbe8),0x218);
              *(int *)(lVar11 + (long)iVar14 * 0x1040 + 0x1038) = (int)uVar15;
              *pcVar2 = '\x01';
              param_1[8] = param_1[8] + 1;
            }
            break;
          }
          iVar7 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 0x10);
          uVar12 = (uint)*(ushort *)(lVar13 + 0x19e);
          if (iVar7 == 2) {
            uVar6 = FUN_00241220(__src);
joined_r0x01c99de8:
            if (uVar6 == uVar12) goto LAB_01c99e10;
          }
          else {
            if (iVar7 == 1) {
              uVar6 = FUN_0024d6a4(__src);
              goto joined_r0x01c99de8;
            }
            if (iVar7 == 0) {
              uVar6 = FUN_0030a228(__src);
              goto joined_r0x01c99de8;
            }
            if (uVar12 == 0) goto LAB_01c99e10;
          }
LAB_01c99d84:
          iVar14 = iVar14 + 1;
        } while (iVar4 != iVar14);
      }
      uVar15 = uVar15 + 1;
      plVar3 = plVar1 + *(uint *)(param_2 + 0x18);
      if (1 < *(uint *)(param_2 + 0x18)) {
        plVar3 = plVar1;
      }
      lVar11 = *plVar3;
    } while ((long)uVar15 < (long)*(int *)(lVar11 + 0x20));
  }
  return;
}

