
/* WARNING: Removing unreachable block (ram,0x03c0bb08) */

undefined8 FUN_03c0b770(long param_1,long *param_2,long *param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char **ppcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 *__src;
  ulong uVar10;
  int local_1674;
  char *local_1670 [2];
  undefined4 local_1660;
  char local_165c [12];
  undefined8 local_1650 [2];
  undefined1 local_163d;
  DeliveryCacheDirectory aDStack_90 [8];
  undefined1 local_88 [31];
  undefined1 local_69;
  
  if (param_4[1] != '\0') {
    FUN_03c0d3c0(*(undefined8 *)(param_1 + 0x2c8),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined2 *)(param_1 + 0x2d5) = 0;
    lVar6 = DAT_05ae7888;
    if (DAT_05ae7888 < 0) {
      lVar6 = DAT_05ae7888 + 1;
    }
    uVar4 = nn::bcat::MountDeliveryCacheStorage();
    if (uVar4 != 0) {
      do {
        if ((uVar4 & 0x3fffff) != 0x67a) {
          *(uint *)(param_1 + 0x2d0) = uVar4;
          *(undefined1 *)(param_1 + 0x2d5) = 1;
          if (*(char *)(param_1 + 0x2d4) != '\0') {
            FUN_03ebb160(param_1 + 0x238,2);
          }
          return 0;
        }
        nn::os::ConvertToTimeSpan(lVar6 >> 1);
        nn::os::SleepThread();
        uVar4 = nn::bcat::MountDeliveryCacheStorage();
      } while (uVar4 != 0);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  local_69 = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (local_88 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') {
LAB_03c0b894:
        iVar5 = (int)lVar6;
joined_r0x03c0b898:
        if (0x1f < iVar5) {
          iVar5 = 0x1f;
        }
        goto LAB_03c0b8a0;
      }
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03c0b894;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        iVar5 = (int)lVar6 + 2;
        goto joined_r0x03c0b898;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    iVar5 = 0;
LAB_03c0b8a0:
    memcpy(local_88,__src,(long)iVar5);
    local_88[iVar5] = 0;
  }
  nn::bcat::DeliveryCacheDirectory::DeliveryCacheDirectory(aDStack_90);
  iVar5 = nn::bcat::DeliveryCacheDirectory::Open((DirectoryName *)aDStack_90);
  if (iVar5 == 0) {
    memset(local_1670,0,0x15e0);
    local_1674 = 0;
    iVar5 = nn::bcat::DeliveryCacheDirectory::Read
                      ((int *)aDStack_90,(DeliveryCacheDirectoryEntry *)&local_1674,(int)local_1670)
    ;
    if ((iVar5 == 0) && (0 < local_1674)) {
      lVar6 = 0;
      uVar10 = (ulong)local_1670 | 1;
      do {
        (**(code **)(*param_3 + 0x18))(param_3);
        ppcVar7 = (char **)param_3[1];
        if (local_1670 + lVar6 * 7 == ppcVar7) {
LAB_03c0ba40:
          uVar9 = local_1650[lVar6 * 7];
          nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory(aDStack_90);
          local_163d = 0;
          local_1670[1] = local_165c;
          local_1660 = 0x20;
          local_165c[0] = '\0';
          local_1670[0] = PTR_DAT_04bb2028 + 0x10;
          FUN_038b6c10(local_1670,param_3);
          (**(code **)(local_1670[0] + 0x18))(local_1670);
          (**(code **)(local_1670[0] + 0x18))(local_1670);
          if (local_1670[1] == "szs") goto LAB_03c0bb24;
          if (*local_1670[1] != 's') goto LAB_03c0bb50;
          uVar10 = 0;
          goto LAB_03c0bad0;
        }
        uVar8 = 0;
        bVar3 = true;
        do {
          cVar2 = *(char *)(uVar10 + uVar8 + -1);
          if (cVar2 != *(char *)((long)ppcVar7 + uVar8)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_03c0ba40;
            break;
          }
          if (*(char *)(uVar10 + uVar8) != *(char *)((long)ppcVar7 + uVar8 + 1)) break;
          if (*(char *)(uVar10 + uVar8) == '\0') goto LAB_03c0ba40;
          cVar2 = *(char *)(uVar10 + uVar8 + 1);
          if (cVar2 != *(char *)((long)ppcVar7 + uVar8 + 2)) break;
          if (cVar2 == '\0') goto LAB_03c0ba40;
          bVar3 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        lVar6 = lVar6 + 1;
        uVar10 = uVar10 + 0x38;
      } while (lVar6 < local_1674);
    }
  }
  nn::bcat::DeliveryCacheDirectory::~DeliveryCacheDirectory(aDStack_90);
  nn::bcat::UnmountDeliveryCacheStorage();
  uVar9 = 0;
  goto LAB_03c0b8e4;
  while( true ) {
    if (local_1670[1][uVar8 + 1] != (&DAT_040ad2e6)[uVar8]) {
      uVar10 = 0;
      goto LAB_03c0bb10;
    }
    uVar10 = uVar8 + 1;
    if (local_1670[1][uVar8 + 1] == '\0') break;
LAB_03c0bad0:
    uVar8 = uVar10;
    uVar10 = uVar8;
    if (uVar8 == 0x80000) goto LAB_03c0bb10;
  }
  uVar10 = 1;
LAB_03c0bb10:
  if ((uVar8 & 0xfffffffffff80000) == 0 && (((uint)uVar10 ^ 1) & 1) == 0) {
LAB_03c0bb24:
    if (*param_4 == '\0') goto LAB_03c0bb50;
    if (*(long *)(param_4 + 8) == 0) {
      uVar9 = FUN_03c0cbd0(*(undefined8 *)(param_1 + 0x2c8),param_2,param_3,uVar9,
                           *(undefined4 *)(param_4 + 4));
    }
    else {
      uVar9 = FUN_03c0d110();
    }
  }
  else {
LAB_03c0bb50:
    if (*(long *)(param_4 + 8) == 0) {
      uVar9 = FUN_03c0c740(*(undefined8 *)(param_1 + 0x2c8),param_2,param_3,uVar9,
                           *(undefined4 *)(param_4 + 4));
    }
    else {
      uVar9 = FUN_03c0ceb0();
    }
  }
  nn::bcat::UnmountDeliveryCacheStorage();
LAB_03c0b8e4:
  *(undefined1 *)(param_1 + 0x2d7) = 0;
  return uVar9;
}

