
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0232d9f0(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  char *__dest;
  undefined *local_40;
  char *local_38;
  
  puVar4 = PTR_DAT_04bb4718;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if (*(int *)(param_1 + 0x178) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x15c) == 0)) {
LAB_0232db04:
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_054f0960);
          puVar12 = &DAT_054f0958;
          if (iVar5 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar12 = &DAT_054f0958;
        }
      }
      else {
        puVar12 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar12 = puVar12 + *pbVar1;
        }
      }
      local_40 = (undefined *)CONCAT44(local_40._4_4_,0x26);
      if ((*(uint *)((long)puVar12 + 4) >> 6 & 1) != 0) {
        return 0;
      }
      if (*(long *)puVar4 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_054f0960);
          puVar12 = &DAT_054f0958;
          if (iVar5 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar12 = &DAT_054f0958;
        }
      }
      else {
        puVar12 = (undefined8 *)(*(long *)puVar4 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar12 = puVar12 + *pbVar1;
        }
      }
      *(uint *)((long)puVar12 + 4) = *(uint *)((long)puVar12 + 4) | 0x40;
      lVar8 = *(long *)PTR_DAT_04bb26a8;
      local_40 = PTR_DAT_04bb2020 + 0x10;
      local_38 = &DAT_040c5cec;
      lVar7 = *(long *)(lVar8 + 0x19f840);
joined_r0x0232dc78:
      do {
        if (lVar7 == 0) {
          uVar6 = 0xffff;
LAB_0232de24:
          FUN_02a0d880(lVar8 + 0xa7660,uVar6);
          return 1;
        }
        iVar5 = FUN_029ca720(&local_40,lVar7 + 0x20);
        if (-1 < iVar5) {
          if (iVar5 == 0) {
            uVar6 = *(undefined2 *)(lVar7 + 0x30);
            goto LAB_0232de24;
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          goto joined_r0x0232dc78;
        }
        lVar7 = *(long *)(lVar7 + 8);
      } while( true );
    }
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar7 + 0x158);
    }
    bVar11 = *pbVar1;
    bVar10 = *pbVar2;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 == bVar11) goto LAB_0232db04;
LAB_0232da1c:
    if (*(int *)(lVar7 + 0x15c) == 0) goto LAB_0232da34;
    bVar3 = true;
    puVar12 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    if (lVar7 != 0) goto LAB_0232da1c;
LAB_0232da34:
    bVar3 = false;
    puVar12 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  pcVar9 = (char *)(puVar12 + 0xb9e);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if (bVar3) {
    local_38 = "CompFanfare_MultiPlay";
    if (*pcVar9 == '\0') {
      lVar7 = 0;
    }
    else {
      pcVar9 = (char *)(puVar12 + 0xbae);
      if (*pcVar9 == '\0') {
        lVar7 = 1;
      }
      else if (*(char *)(puVar12 + 0xbbe) == '\0') {
        pcVar9 = (char *)(puVar12 + 0xbbe);
        lVar7 = 2;
      }
      else {
        if (*(char *)(puVar12 + 0xbce) != '\0') {
          return 1;
        }
        pcVar9 = (char *)(puVar12 + 0xbce);
        lVar7 = 3;
      }
    }
    puVar12 = puVar12 + lVar7 * 0x10 + 0xb8f;
    *pcVar9 = '\x01';
    __dest = (char *)puVar12[1];
    *(int *)((long)puVar12 + 0x7c) = (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    (**(code **)(puVar4 + 0x28))(&local_40);
    pcVar9 = local_38;
    if (__dest == local_38) goto LAB_0232de18;
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar7 = 0;
    do {
      if (local_38[lVar7] == '\0') goto LAB_0232ddf0;
      if (local_38[lVar7 + 1] == '\0') goto LAB_0232dde4;
      if (local_38[lVar7 + 2] == '\0') goto LAB_0232ddec;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  else {
    local_38 = "CompFanfare_MultiPlay";
    if (*pcVar9 == '\0') {
      lVar7 = 0;
    }
    else {
      pcVar9 = (char *)(puVar12 + 0xbae);
      if (*pcVar9 == '\0') {
        lVar7 = 1;
      }
      else if (*(char *)(puVar12 + 0xbbe) == '\0') {
        pcVar9 = (char *)(puVar12 + 0xbbe);
        lVar7 = 2;
      }
      else {
        if (*(char *)(puVar12 + 0xbce) != '\0') {
          return 1;
        }
        pcVar9 = (char *)(puVar12 + 0xbce);
        lVar7 = 3;
      }
    }
    puVar12 = puVar12 + lVar7 * 0x10 + 0xb8f;
    *pcVar9 = '\x01';
    __dest = (char *)puVar12[1];
    *(int *)((long)puVar12 + 0x7c) = (int)*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x508);
    (**(code **)(puVar4 + 0x28))(&local_40);
    pcVar9 = local_38;
    if (__dest == local_38) goto LAB_0232de18;
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar7 = 0;
    do {
      if (local_38[lVar7] == '\0') goto LAB_0232ddf0;
      if (local_38[lVar7 + 1] == '\0') goto LAB_0232dde4;
      if (local_38[lVar7 + 2] == '\0') goto LAB_0232ddec;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  lVar7 = 0;
  goto LAB_0232ddf0;
LAB_0232dde4:
  lVar7 = lVar7 + 1;
  goto LAB_0232ddf0;
LAB_0232ddec:
  lVar7 = lVar7 + 2;
LAB_0232ddf0:
  iVar5 = (int)lVar7;
  if (*(int *)(puVar12 + 2) <= (int)lVar7) {
    iVar5 = *(int *)(puVar12 + 2) + -1;
  }
  memcpy(__dest,pcVar9,(long)iVar5);
  __dest[iVar5] = '\0';
LAB_0232de18:
  *(undefined4 *)(puVar12 + 0xe) = 0;
  return 1;
}

