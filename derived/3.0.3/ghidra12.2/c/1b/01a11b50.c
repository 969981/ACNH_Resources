
undefined8 FUN_01a11b50(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *__src;
  uint *puVar7;
  long lVar8;
  char cVar9;
  char *pcVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  char *__dest;
  
  uVar5 = 0;
  if ((param_2 != 0) && (param_3 != 0xfffe)) {
    uVar5 = 0;
    if ((*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) && (*(int *)(param_1 + 0x18) != 0))
    {
      puVar13 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
      if (((DAT_052d2590 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052d2590), iVar4 != 0)) {
        DAT_052d2588 = &PTR_LAB_049fa588;
        __cxa_guard_release(&DAT_052d2590);
      }
      if ((((puVar13 == (undefined8 *)0x0) ||
           (uVar6 = (**(code **)*puVar13)(puVar13,&DAT_052d2588), puVar3 = PTR_DAT_04bbec80,
           puVar2 = PTR_DAT_04bbec78, (uVar6 & 1) == 0)) ||
          (uVar1 = (param_3 & 0xffff) - (uint)*(ushort *)(puVar13 + 0x3f),
          *(uint *)(puVar13 + 0x3b) <= uVar1)) ||
         (puVar7 = *(uint **)(puVar13[0x3c] + (long)(int)uVar1 * 8), puVar7 == (uint *)0x0)) {
        uVar5 = 0;
      }
      else {
        if (*puVar7 != 0) {
          cVar9 = *PTR_DAT_04bbec78;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar1 = *(uint *)(puVar3 + 0x3c);
              if (-1 < (int)uVar1) {
                pcVar10 = (char *)((ulong)uVar1 + (long)puVar7);
                goto LAB_01a11cc8;
              }
              if (uVar1 != 0xffffffff) break;
            }
            puVar11 = (uint *)(ulong)*puVar7;
            pcVar10 = (char *)0x0;
            if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_01a11cc8;
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
            if (lVar8 == 0) break;
            uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
            *(undefined4 *)(puVar3 + 0x3c) = 0xfffffffe;
            pcVar10 = (char *)0x0;
            if (uVar6 == 0) goto LAB_01a11cc8;
            piVar12 = (int *)(lVar8 + 4);
            while (piVar12[-1] != -0x1b48c083) {
              piVar12 = piVar12 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) {
                pcVar10 = (char *)0x0;
                goto LAB_01a11cc8;
              }
            }
            iVar4 = 0;
            if (*piVar12 != -1) {
              iVar4 = *piVar12;
            }
            *(int *)(puVar3 + 0x3c) = iVar4;
          } while (*puVar7 != 0);
        }
        pcVar10 = (char *)0x0;
LAB_01a11cc8:
        __dest = *(char **)(param_2 + 8);
        __src = PTR_DAT_04c484b8;
        if (pcVar10 != (char *)0x0) {
          __src = pcVar10;
        }
        if (__dest != __src) {
          lVar8 = 0;
          do {
            if (__src[lVar8] == '\0') goto LAB_01a11d44;
            if (__src[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_01a11d44;
            }
            if (__src[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_01a11d44;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_01a11d44:
          iVar4 = (int)lVar8;
          if (*(int *)(param_2 + 0x10) <= (int)lVar8) {
            iVar4 = *(int *)(param_2 + 0x10) + -1;
          }
          memcpy(__dest,__src,(long)iVar4);
          __dest[iVar4] = '\0';
          __src = *(char **)(param_2 + 8);
        }
        if (*__src == '\0') {
          uVar5 = FUN_01a11820(param_1,param_2,param_3,0);
          return uVar5;
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

