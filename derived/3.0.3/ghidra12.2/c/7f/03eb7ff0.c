
/* WARNING: Removing unreachable block (ram,0x03eb82b8) */
/* WARNING: Removing unreachable block (ram,0x03eb82a0) */
/* WARNING: Removing unreachable block (ram,0x03eb82d0) */

void FUN_03eb7ff0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  char *pcVar14;
  undefined *local_50;
  char *local_48;
  
  puVar5 = PTR_DAT_04bb2640;
  puVar8 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(*(long *)PTR_DAT_04bb2720 + 0x338))
  ;
  *(undefined1 *)param_1[1] = 0;
  lVar3 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = param_1[1];
  lVar11 = 0;
  if (puVar8 == (undefined8 *)0x0) {
    do {
      if (*(char *)(lVar9 + lVar11) == '\0') goto LAB_03eb8244;
      if (*(char *)(lVar9 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03eb8244;
      }
      if (*(char *)(lVar9 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03eb8244;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03eb8244:
    uVar1 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    uVar2 = 0x22;
    if ((int)((int)param_1[2] - uVar1) < 0x23) {
      uVar2 = (int)param_1[2] + ~uVar1;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)(lVar3 + (ulong)uVar1),"----[ No Scene Info ]------------\n",(ulong)uVar2);
      *(undefined1 *)(lVar3 + (ulong)uVar2 + (ulong)uVar1) = 0;
    }
  }
  else {
    do {
      if (*(char *)(lVar9 + lVar11) == '\0') goto LAB_03eb80cc;
      if (*(char *)(lVar9 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03eb80cc;
      }
      if (*(char *)(lVar9 + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03eb80cc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03eb80cc:
    uVar1 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    uVar2 = 0x1f;
    if ((int)((int)param_1[2] - uVar1) < 0x20) {
      uVar2 = (int)param_1[2] + ~uVar1;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)(lVar3 + (ulong)uVar1),"----[ Scene Info ]------------\n",(ulong)uVar2);
      *(undefined1 *)(lVar3 + (ulong)uVar2 + (ulong)uVar1) = 0;
    }
    pcVar12 = (char *)*puVar8;
    local_50 = PTR_DAT_04bb2020 + 0x10;
    plVar13 = *(long **)puVar5;
    local_48 = pcVar12;
    iVar6 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if (iVar6 < 1) {
      iVar6 = -1;
    }
    else {
      iVar6 = 0;
      do {
        puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0x18))(plVar13,iVar6);
        pcVar14 = (char *)*puVar8;
        (**(code **)(local_50 + 0x18))(&local_50);
        if (pcVar14 == local_48) goto LAB_03eb8214;
        if (*pcVar14 == *local_48) {
          if (*pcVar14 == '\0') goto LAB_03eb8214;
          lVar11 = 0x7fffe;
          pcVar10 = local_48;
          while( true ) {
            if (pcVar14[1] != pcVar10[1]) break;
            if (pcVar14[1] == '\0') goto LAB_03eb8214;
            if (pcVar14[2] != pcVar10[2]) break;
            if (pcVar14[2] == '\0') goto LAB_03eb8214;
            if ((lVar11 == 0) || (cVar4 = pcVar14[3], cVar4 != pcVar10[3])) break;
            lVar11 = lVar11 + -3;
            pcVar10 = pcVar10 + 3;
            pcVar14 = pcVar14 + 3;
            if (cVar4 == '\0') goto LAB_03eb8214;
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
      } while (iVar6 < iVar7);
      iVar6 = -1;
    }
LAB_03eb8214:
    FUN_038d13f0(param_1,"SceneId:\t%s(%d)\n",pcVar12,iVar6);
  }
  local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
  *(undefined1 *)(param_1 + 0x7b) = 1;
  param_1[0x84] = 0;
  lVar11 = nn::os::GetSystemTick();
  param_1[0x7c] = lVar11;
  return;
}

