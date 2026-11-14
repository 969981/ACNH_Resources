
void FUN_01d71e50(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 *__dest;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  size_t __n;
  uint *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x30);
    puVar1 = puVar14 + *(int *)(param_1 + 0x28);
    do {
      plVar15 = (long *)*puVar14;
      lVar10 = *plVar15;
      if (lVar10 == 0) {
        return;
      }
      if ((char)plVar15[0xd8] != '\0') {
        puVar13 = *(uint **)(param_1 + 0x40);
        uVar5 = *puVar13;
        if (uVar5 == 0) {
          plVar16 = (long *)0x0;
        }
        else {
          __dest = *(undefined8 **)(puVar13 + 2);
          uVar6 = (long)(int)uVar5 - 1;
          uVar12 = uVar6;
          do {
            plVar16 = (long *)__dest[uVar12];
            if (*plVar16 == 0) break;
            if (*plVar16 == lVar10) {
              *plVar16 = lVar10;
              goto LAB_01d71e9c;
            }
            bVar4 = uVar12 != 0;
            uVar12 = uVar12 - 1;
          } while (bVar4);
          plVar16 = (long *)*__dest;
          if (0 < (int)uVar5) {
            lVar10 = 0;
            __n = (long)(int)uVar5 * 8;
            do {
              __n = __n - 8;
              if ((long *)*__dest == plVar16) {
                iVar8 = (int)lVar10;
                if (iVar8 != 1) {
                  if ((-1 < -iVar8) && (-iVar8 < (int)uVar5)) {
                    if (1 - iVar8 < (int)uVar5) {
                      memmove(__dest,__dest + 1,__n);
                      uVar6 = (ulong)(*puVar13 - 1);
                    }
                    *puVar13 = (uint)uVar6;
                    puVar13 = *(uint **)(param_1 + 0x40);
                    uVar5 = *puVar13;
                  }
                  if ((int)uVar5 < (int)puVar13[1]) {
                    *(long **)(*(long *)(puVar13 + 2) + (long)(int)uVar5 * 8) = plVar16;
                    *puVar13 = *puVar13 + 1;
                  }
                }
                break;
              }
              lVar10 = lVar10 + -1;
              __dest = __dest + 1;
            } while ((ulong)uVar5 + lVar10 != 0);
          }
        }
        *plVar16 = *plVar15;
LAB_01d71e9c:
        memcpy(plVar16 + 1,plVar15 + 1,0x6b8);
        *(char *)(plVar16 + 0xd8) = (char)plVar15[0xd8];
        *(int *)(plVar16 + 0xda) = (int)plVar15[0xda];
        *(undefined4 *)((long)plVar16 + 0x6d4) = *(undefined4 *)((long)plVar15 + 0x6d4);
        lVar10 = plVar15[0xdb];
        plVar16[0xde] = 0;
        *(undefined8 *)((long)plVar16 + 0x6e9) = 0;
        *(undefined8 *)((long)plVar16 + 0x6e1) = 0;
        *(undefined8 *)((long)plVar16 + 0x6d9) = 0;
        *(char *)(plVar16 + 0xdb) = (char)lVar10;
        uVar7 = *(undefined8 *)((long)plVar15 + 0x6e1);
        uVar9 = *(undefined8 *)((long)plVar15 + 0x6e9);
        uVar11 = *(undefined8 *)((long)plVar15 + 0x6ef);
        *(undefined8 *)((long)plVar16 + 0x6d9) = *(undefined8 *)((long)plVar15 + 0x6d9);
        *(undefined8 *)((long)plVar16 + 0x6ef) = uVar11;
        *(undefined8 *)((long)plVar16 + 0x6e9) = uVar9;
        *(undefined8 *)((long)plVar16 + 0x6e1) = uVar7;
        *(char *)(plVar16 + 0xdf) = (char)plVar15[0xdf];
        uVar3 = *(undefined1 *)((long)plVar15 + 0x6f9);
        *(undefined8 *)((long)plVar16 + 0x72f) = 0;
        *(undefined8 *)((long)plVar16 + 0x72a) = 0;
        *(undefined8 *)((long)plVar16 + 0x722) = 0;
        *(undefined8 *)((long)plVar16 + 0x71a) = 0;
        *(undefined8 *)((long)plVar16 + 0x712) = 0;
        *(undefined8 *)((long)plVar16 + 0x70a) = 0;
        *(undefined8 *)((long)plVar16 + 0x702) = 0;
        *(undefined8 *)((long)plVar16 + 0x6fa) = 0;
        *(undefined1 *)((long)plVar16 + 0x6f9) = uVar3;
        uVar7 = *(undefined8 *)((long)plVar15 + 0x702);
        uVar9 = *(undefined8 *)((long)plVar15 + 0x70a);
        uVar11 = *(undefined8 *)((long)plVar15 + 0x712);
        *(undefined8 *)((long)plVar16 + 0x6fa) = *(undefined8 *)((long)plVar15 + 0x6fa);
        *(undefined8 *)((long)plVar16 + 0x712) = uVar11;
        *(undefined8 *)((long)plVar16 + 0x70a) = uVar9;
        *(undefined8 *)((long)plVar16 + 0x702) = uVar7;
        uVar7 = *(undefined8 *)((long)plVar15 + 0x722);
        uVar9 = *(undefined8 *)((long)plVar15 + 0x72a);
        uVar2 = *(undefined4 *)((long)plVar15 + 0x732);
        *(undefined8 *)((long)plVar16 + 0x71a) = *(undefined8 *)((long)plVar15 + 0x71a);
        *(undefined4 *)((long)plVar16 + 0x732) = uVar2;
        *(undefined8 *)((long)plVar16 + 0x72a) = uVar9;
        *(undefined8 *)((long)plVar16 + 0x722) = uVar7;
        *(undefined1 *)((long)plVar16 + 0x737) = *(undefined1 *)((long)plVar15 + 0x737);
        lVar10 = plVar15[0xe7];
        *(int *)(plVar16 + 0xe8) = (int)plVar15[0xe8];
        plVar16[0xe7] = lVar10;
        *(undefined1 *)((long)plVar16 + 0x744) = *(undefined1 *)((long)plVar15 + 0x744);
        lVar10 = plVar15[0xe9];
        plVar16[0xea] = 0;
        plVar16[0xe9] = lVar10;
        uVar2 = *(undefined4 *)((long)plVar15 + 0x753);
        *(int *)(plVar16 + 0xea) = (int)plVar15[0xea];
        *(undefined4 *)((long)plVar16 + 0x753) = uVar2;
        plVar16[0xeb] = plVar15[0xeb];
        memset(plVar16 + 0xec,0,0x400);
        memcpy(plVar16 + 0xec,plVar15 + 0xec,0x3ff);
        *(char *)(plVar16 + 0xd9) = (char)plVar15[0xd9];
        FUN_01d719fc(plVar16 + 0x16c,plVar15 + 0x16c);
        *(char *)(plVar16 + 0x30e) = (char)plVar15[0x30e];
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar1);
  }
  return;
}

