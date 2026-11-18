
void FUN_033b9210(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  char *pcVar12;
  int iVar13;
  void *__dest;
  void *__src;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  FUN_033fc620(param_1 + 0xb8,param_1);
  pcVar12 = *(char **)(param_1 + 0x128);
  if (pcVar12 != "UI3DSetParamList") {
    iVar6 = 0x10;
    if (*(int *)(param_1 + 0x130) < 0x11) {
      iVar6 = *(int *)(param_1 + 0x130) + -1;
    }
    memcpy(pcVar12,"UI3DSetParamList",(long)iVar6);
    pcVar12[iVar6] = '\0';
  }
  local_6d = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  puVar5 = PTR_DAT_04bb21f8;
  local_170 = 0x100;
  puStack_178 = local_16c;
  local_16c[0] = 0;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  uVar8 = (**(code **)(*(long *)(param_1 + 0xf0) + 0xf0))(param_1 + 0xf0,&local_180,1);
  if ((uVar8 & 1) != 0) {
    FUN_03c27e60(param_1 + 0xf0,&local_180,0);
  }
  pcVar12 = *(char **)(param_1 + 0x808);
  plVar1 = (long *)(param_1 + 2000);
  *(undefined4 *)(param_1 + 0x33c) = 7;
  *(undefined1 *)(param_1 + 0x338) = 0;
  if (pcVar12 != "UI3DUseParamList") {
    iVar6 = 0x10;
    if (*(int *)(param_1 + 0x810) < 0x11) {
      iVar6 = *(int *)(param_1 + 0x810) + -1;
    }
    memcpy(pcVar12,"UI3DUseParamList",(long)iVar6);
    pcVar12[iVar6] = '\0';
  }
  local_6d = 0;
  *(undefined1 *)(param_1 + 0x918) = 1;
  puStack_178 = local_16c;
  local_170 = 0x100;
  local_180 = puVar5 + 0x10;
  local_16c[0] = 0;
  uVar8 = (**(code **)(*(long *)(param_1 + 2000) + 0xf0))(plVar1,&local_180,1);
  if ((uVar8 & 1) != 0) {
    FUN_03c27e60(plVar1,&local_180,0);
  }
  iVar6 = (**(code **)(*plVar1 + 0x168))(plVar1);
  if (0 < iVar6) {
    iVar13 = 0;
    do {
      iVar7 = (**(code **)(*plVar1 + 0x168))(plVar1);
      if ((iVar13 < iVar7) && (lVar9 = (**(code **)(*plVar1 + 0x158))(plVar1,iVar13), lVar9 != 0)) {
        puVar10 = (uint *)(**(code **)(*(long *)(lVar9 + 0x210) + 0xf0))(lVar9 + 0x210);
        uVar4 = *puVar10;
        if (uVar4 != 0xffffffff) {
          lVar3 = param_1 + 0xa10 + (ulong)uVar4 * 0x60;
          if (0x13 < uVar4) {
            lVar3 = param_1 + 0xa10;
          }
          if (*(int *)(lVar3 + 0x58) == -1) {
            *(int *)(lVar3 + 0x58) = iVar13;
            plVar11 = (long *)(**(code **)(*(long *)(lVar9 + 0x158) + 0xf0))(lVar9 + 0x158);
            __dest = *(void **)(lVar3 + 8);
            (**(code **)(*plVar11 + 0x18))();
            __src = (void *)plVar11[1];
            if (__dest != __src) {
              (**(code **)(*plVar11 + 0x18))(plVar11);
              lVar9 = 0;
              do {
                if (*(char *)(plVar11[1] + lVar9) == '\0') goto LAB_033b93c4;
                lVar2 = plVar11[1] + lVar9;
                if (*(char *)(lVar2 + 1) == '\0') {
                  lVar9 = lVar9 + 1;
                  goto LAB_033b93c4;
                }
                if (*(char *)(lVar2 + 2) == '\0') {
                  lVar9 = lVar9 + 2;
                  goto LAB_033b93c4;
                }
                lVar9 = lVar9 + 3;
              } while (lVar9 != 0x80001);
              lVar9 = 0;
LAB_033b93c4:
              iVar7 = (int)lVar9;
              if (*(int *)(lVar3 + 0x10) <= (int)lVar9) {
                iVar7 = *(int *)(lVar3 + 0x10) + -1;
              }
              memcpy(__dest,__src,(long)iVar7);
              *(undefined1 *)((long)__dest + (long)iVar7) = 0;
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar6);
  }
  return;
}

