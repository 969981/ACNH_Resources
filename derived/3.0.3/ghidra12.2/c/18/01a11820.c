
undefined8 FUN_01a11820(long param_1,long param_2,uint param_3,ulong param_4)

{
  undefined8 *__src;
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *__dest;
  
  uVar5 = 0;
  if ((param_2 != 0) && (param_3 != 0xfffe)) {
    uVar5 = 0;
    if ((*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) && (*(int *)(param_1 + 0x18) != 0))
    {
      puVar14 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
      if (((DAT_052d2590 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052d2590), iVar4 != 0)) {
        DAT_052d2588 = &PTR_LAB_049fa588;
        __cxa_guard_release(&DAT_052d2590);
      }
      if ((((puVar14 == (undefined8 *)0x0) ||
           (uVar6 = (**(code **)*puVar14)(puVar14,&DAT_052d2588), puVar8 = PTR_DAT_04bbec80,
           puVar2 = PTR_DAT_04bbec78, (uVar6 & 1) == 0)) ||
          (uVar3 = (param_3 & 0xffff) - (uint)*(ushort *)(puVar14 + 0x3f),
          *(uint *)(puVar14 + 0x3b) <= uVar3)) ||
         (puVar13 = *(uint **)(puVar14[0x3c] + (long)(int)uVar3 * 8), puVar13 == (uint *)0x0)) {
        uVar5 = 0;
      }
      else {
        if (*puVar13 != 0) {
          cVar10 = *PTR_DAT_04bbec78;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar3 = *(uint *)(puVar8 + 0x34);
              if (-1 < (int)uVar3) {
                puVar14 = (undefined8 *)((ulong)uVar3 + (long)puVar13);
                goto LAB_01a1199c;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar11 = (uint *)(ulong)*puVar13;
            puVar14 = (undefined8 *)0x0;
            if ((*puVar13 == 0) || (puVar13 == puVar11)) goto LAB_01a1199c;
            lVar9 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar11)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar13 + (lVar9 - (long)puVar11);
            if (lVar9 == 0) break;
            uVar6 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar11));
            *(undefined4 *)(puVar8 + 0x34) = 0xfffffffe;
            puVar14 = (undefined8 *)0x0;
            if (uVar6 == 0) goto LAB_01a1199c;
            piVar12 = (int *)(lVar9 + 4);
            while (piVar12[-1] != 0x11b0b143) {
              piVar12 = piVar12 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) {
                puVar14 = (undefined8 *)0x0;
                goto LAB_01a1199c;
              }
            }
            iVar4 = 0;
            if (*piVar12 != -1) {
              iVar4 = *piVar12;
            }
            *(int *)(puVar8 + 0x34) = iVar4;
          } while (*puVar13 != 0);
        }
        puVar14 = (undefined8 *)0x0;
LAB_01a1199c:
        __dest = *(undefined8 **)(param_2 + 8);
        __src = &DAT_0407ebb1;
        if (puVar14 != (undefined8 *)0x0) {
          __src = puVar14;
        }
        if (__dest != __src) {
          lVar9 = 0;
          do {
            if (*(char *)((long)__src + lVar9) == '\0') goto LAB_01a11a18;
            if (*(char *)((long)__src + lVar9 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_01a11a18;
            }
            if (*(char *)((long)__src + lVar9 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_01a11a18;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_01a11a18:
          iVar4 = (int)lVar9;
          if (*(int *)(param_2 + 0x10) <= (int)lVar9) {
            iVar4 = *(int *)(param_2 + 0x10) + -1;
          }
          memcpy(__dest,__src,(long)iVar4);
          *(undefined1 *)((long)__dest + (long)iVar4) = 0;
        }
        if ((param_4 & 1) != 0) {
          pcVar7 = (char *)FUN_018aaa70(puVar13,0xe,0x4c777e9e,DAT_052d1ee0);
          pcVar1 = PTR_DAT_04c484b0;
          if (pcVar7 != (char *)0x0) {
            pcVar1 = pcVar7;
          }
          if (*pcVar1 != '\0') {
            puVar8 = (undefined *)FUN_018aaa70(puVar13,0xe,0x4c777e9e,DAT_052d1ee0);
            puVar2 = PTR_DAT_04c484b0;
            if (puVar8 != (undefined *)0x0) {
              puVar2 = puVar8;
            }
            puVar8 = *(undefined **)(param_2 + 8);
            if (puVar8 != puVar2) {
              lVar9 = 0;
              do {
                if (puVar2[lVar9] == '\0') goto LAB_01a11aec;
                if (puVar2[lVar9 + 1] == '\0') {
                  lVar9 = lVar9 + 1;
                  goto LAB_01a11aec;
                }
                if (puVar2[lVar9 + 2] == '\0') {
                  lVar9 = lVar9 + 2;
                  goto LAB_01a11aec;
                }
                lVar9 = lVar9 + 3;
              } while (lVar9 != 0x80001);
              lVar9 = 0;
LAB_01a11aec:
              iVar4 = (int)lVar9;
              if (*(int *)(param_2 + 0x10) <= (int)lVar9) {
                iVar4 = *(int *)(param_2 + 0x10) + -1;
              }
              memcpy(puVar8,puVar2,(long)iVar4);
              puVar8[iVar4] = 0;
            }
          }
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

