
void FUN_020986a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 auStack_84 [8];
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_78 = 0xfed;
  FUN_0277d4ac(&local_78);
  if (((DAT_053dc0c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053dc0c0), iVar3 != 0)) {
    DAT_053dc0b0 = 1;
    DAT_053dc0b4 = '\x01';
    DAT_053dc0b8 = '\x01';
    __cxa_guard_release(&DAT_053dc0c0);
  }
  local_7c = 0;
  FUN_01afbaa4(auStack_84,&local_78,&local_7c);
  puVar2 = PTR_DAT_04bb2720;
  puVar1 = PTR_DAT_04bb2010;
  local_98 = PTR_DAT_04bb2010 + 0x10;
  uStack_90 = 0x200000000;
  uStack_68 = 0;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,2,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,2,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_68 = 0;
  uStack_90 = 0x200000004;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,2,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,2,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_68 = 0;
  uStack_90 = 0x200000008;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,2,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,2,auStack_84,&local_70);
  }
  local_7c = (uint)DAT_053dc0b0;
  FUN_01afbaa4(auStack_84,&local_78,&local_7c);
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000000;
  lVar5 = *(long *)puVar2;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,3,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,3,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000004;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,3,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,3,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000008;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,3,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,3,auStack_84,&local_70);
  }
  local_7c = 2;
  if (DAT_053dc0b4 == '\0') {
    local_7c = 0;
  }
  FUN_01afbaa4(auStack_84,&local_78,&local_7c);
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000000;
  lVar5 = *(long *)puVar2;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,4,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,4,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000004;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,4,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,4,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000008;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,4,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,4,auStack_84,&local_70);
  }
  local_7c = 3;
  if (DAT_053dc0b8 == '\0') {
    local_7c = 0;
  }
  FUN_01afbaa4(auStack_84,&local_78,&local_7c);
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000000;
  lVar5 = *(long *)puVar2;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,5,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,5,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000004;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,5,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,5,auStack_84,&local_70);
  }
  lVar5 = *(long *)puVar2;
  local_98 = puVar1 + 0x10;
  uStack_90 = 0x200000008;
  uStack_68 = 0;
  local_70 = local_98;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = FUN_0153eb30(&local_70,&local_98,5,*(undefined4 *)(puVar6 + 7));
  if ((uVar4 & 1) != 0) {
    FUN_01a50970(param_1,5,auStack_84,&local_70);
  }
  return;
}

