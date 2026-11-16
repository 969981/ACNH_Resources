
void FUN_0251aa80(byte *param_1,long *param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  void *__dest;
  undefined8 *puVar10;
  void *__src;
  long *local_48;
  char local_40;
  char local_3f;
  int local_38;
  undefined4 local_34;
  
  piVar6 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar6 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_38 = *piVar6;
  if (local_38 != 0) {
    local_34 = param_3;
    FUN_0071c8d0(&local_48,&local_38,&local_34,0);
    plVar3 = local_48;
    if (local_48 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
      if ((uVar5 & 1) == 0) {
        local_3f = '\0';
      }
    }
    if (((local_48 != (long *)0x0) && (local_40 != '\0')) && (local_3f != '\0')) {
      puVar10 = (undefined8 *)local_48[0xc];
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar4 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      puVar2 = PTR_DAT_04bb2118;
      pcVar7 = (char *)(puVar10 + 0xb9e);
      if (*pcVar7 == '\0') {
        lVar9 = 0;
      }
      else {
        pcVar7 = (char *)(puVar10 + 0xbae);
        if (*pcVar7 == '\0') {
          lVar9 = 1;
        }
        else if (*(char *)(puVar10 + 0xbbe) == '\0') {
          pcVar7 = (char *)(puVar10 + 0xbbe);
          lVar9 = 2;
        }
        else {
          if (*(char *)(puVar10 + 0xbce) != '\0') {
            return;
          }
          pcVar7 = (char *)(puVar10 + 0xbce);
          lVar9 = 3;
        }
      }
      *pcVar7 = '\x01';
      __dest = (void *)puVar10[lVar9 * 0x10 + 0xb90];
      *(uint *)((long)puVar10 + lVar9 * 0x80 + 0x5cf4) =
           *(int *)(*(long *)puVar2 + 0x508) + (param_4 & 1);
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
      if (__dest != __src) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = 0;
        do {
          if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0251ac6c;
          lVar1 = param_2[1] + lVar8;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0251ac6c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0251ac6c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0251ac6c:
        iVar4 = (int)lVar8;
        if (*(int *)(puVar10 + lVar9 * 0x10 + 0xb91) <= (int)lVar8) {
          iVar4 = *(int *)(puVar10 + lVar9 * 0x10 + 0xb91) + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        *(undefined1 *)((long)__dest + (long)iVar4) = 0;
      }
      *(undefined4 *)(puVar10 + lVar9 * 0x10 + 0xb9d) = 0;
    }
  }
  return;
}

