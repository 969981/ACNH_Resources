
void FUN_01f6636c(long param_1)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  piVar1 = (int *)(param_1 + 0x13648);
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x136a8) = 0;
  switch(*(undefined4 *)(param_1 + 0x136a4)) {
  case 1:
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = local_80 & 0xffffffff00000000;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    *(undefined4 *)(lVar6 + 0x3ac) = 1;
    lVar6 = *(long *)(param_1 + 8);
    uVar7 = *(uint *)(lVar6 + 0x288);
    *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
    uVar2 = *(uint *)(lVar6 + 0x294);
    *(uint *)(lVar6 + 0x290) = uVar2;
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    *(uint *)(lVar6 + 0x294) = uVar7;
    lVar6 = 0x1c2;
    goto LAB_01f664b0;
  case 2:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    uVar4 = 3;
    goto LAB_01f66658;
  case 3:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    uVar4 = 5;
    goto LAB_01f665c4;
  case 4:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    *(undefined4 *)(lVar6 + 0x3ac) = 0x46;
    iVar5 = 0x1c2;
    break;
  case 5:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    uVar4 = 0x44;
LAB_01f665c4:
    *(undefined4 *)(lVar6 + 0x3ac) = uVar4;
    iVar5 = 0xd2;
    break;
  case 6:
    uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
    if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
      FUN_0219bcf0(&DAT_053fe348 + (ulong)uVar7 * 0xba0,1,10,1,1);
    }
    *(undefined4 *)(param_1 + 0x136a8) = 0;
    goto LAB_01f667bc;
  case 7:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xc,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    uVar4 = 0x43;
LAB_01f66658:
    *(undefined4 *)(lVar6 + 0x3ac) = uVar4;
    iVar5 = 300;
    break;
  case 8:
    local_80 = 0xfffe;
    FUN_0277d4ac(&local_80);
    FUN_01e3b790(&local_78,*(undefined8 *)(param_1 + 8));
    local_80 = (ulong)local_78;
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    lVar6 = *(long *)(param_1 + 0x10);
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar6,0xe,PTR_DAT_04bb2150,&local_78,&local_24,PTR_DAT_04bc1600,6);
    local_45 = 0;
    local_64[0] = 0;
    *(uint *)(lVar6 + 0x40c) = local_80._4_4_;
    *(undefined4 *)(lVar6 + 0x408) = (undefined4)local_80;
    pcStack_70 = local_64;
    local_68 = 0x20;
    lVar6 = *(long *)(lVar6 + 0x358);
    local_78 = PTR_DAT_04bb2028 + 0x10;
    (**(code **)(*(long *)(lVar6 + 0x3e0) + 0x18))(lVar6 + 0x3e0);
    FUN_038d1270(&local_78,"NpcActorAction.%s",*(undefined8 *)(lVar6 + 1000));
    *(undefined4 *)(param_1 + 0x136a8) = 0xf0;
    *(undefined4 *)(param_1 + 0x1370c) = 2;
    goto LAB_01f667bc;
  case 9:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xd,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    pcVar8 = *(char **)(lVar6 + 0x3b8);
    if (pcVar8 != "NpcCheers") {
      iVar5 = 9;
      if (*(int *)(lVar6 + 0x3c0) < 10) {
        iVar5 = *(int *)(lVar6 + 0x3c0) + -1;
      }
      memcpy(pcVar8,"NpcCheers",(long)iVar5);
      pcVar8[iVar5] = '\0';
    }
    *(undefined4 *)(lVar6 + 0x3a0) = 0;
    iVar5 = 900;
    *(undefined1 *)(lVar6 + 0x410) = 0;
    break;
  case 10:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar6 = *(long *)(param_1 + 0x10);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,lVar6,0xd,PTR_DAT_04bb2150,&local_78,&local_80,PTR_DAT_04bc1600,6);
    pcVar8 = *(char **)(lVar6 + 0x3b8);
    if (pcVar8 != "NpcWatchFurniture") {
      iVar5 = 0x11;
      if (*(int *)(lVar6 + 0x3c0) < 0x12) {
        iVar5 = *(int *)(lVar6 + 0x3c0) + -1;
      }
      memcpy(pcVar8,"NpcWatchFurniture",(long)iVar5);
      pcVar8[iVar5] = '\0';
    }
    *(undefined4 *)(lVar6 + 0x3a0) = 0;
    *(undefined1 *)(lVar6 + 0x410) = 0;
    *(undefined4 *)(param_1 + 0x136a8) = 0;
    goto LAB_01f667bc;
  default:
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    local_80 = (ulong)local_80._4_4_ << 0x20;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,&local_78,&local_80,
                 PTR_DAT_04bc1600,6);
    lVar6 = *(long *)(param_1 + 8);
    uVar7 = *(uint *)(lVar6 + 0x288);
    *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
    uVar2 = *(uint *)(lVar6 + 0x294);
    *(uint *)(lVar6 + 0x290) = uVar2;
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    *(uint *)(lVar6 + 0x294) = uVar7;
    lVar6 = 0x96;
LAB_01f664b0:
    iVar5 = (int)((ulong)uVar7 * lVar6 >> 0x20) + 0x96;
  }
  *(int *)(param_1 + 0x136a8) = iVar5;
LAB_01f667bc:
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "HarvestPlazaPlace";
  sVar3 = FUN_02196ed0(*(long *)(param_1 + 8) + 0x508,&local_78);
  iVar5 = (uint)(sVar3 == 2) << 1;
  if (sVar3 == 1) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x136a8);
    uVar7 = *(uint *)(lVar6 + 0x288);
    *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
    uVar2 = *(uint *)(lVar6 + 0x294);
    *(uint *)(lVar6 + 0x290) = uVar2;
    uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
    *(uint *)(lVar6 + 0x294) = uVar7;
    *piVar1 = iVar5 + (int)((ulong)uVar7 * 900 >> 0x20) + 900;
    if (*(int *)(param_1 + 0x136a4) == 1) {
      lVar6 = *(long *)(param_1 + 8);
      uVar7 = *(uint *)(lVar6 + 0x288);
      *(undefined4 *)(lVar6 + 0x288) = *(undefined4 *)(lVar6 + 0x28c);
      uVar7 = uVar7 ^ uVar7 << 0xb;
      *(undefined4 *)(lVar6 + 0x28c) = *(undefined4 *)(lVar6 + 0x290);
      uVar2 = *(uint *)(lVar6 + 0x294);
      *(uint *)(lVar6 + 0x290) = uVar2;
      uVar7 = uVar7 >> 8 ^ uVar2 >> 0x13 ^ uVar7 ^ uVar2;
      *(uint *)(lVar6 + 0x294) = uVar7;
      iVar5 = (int)((ulong)uVar7 * 900 >> 0x20) + 900;
      *(int *)(param_1 + 0x136a8) = iVar5;
      *piVar1 = iVar5;
    }
  }
  return;
}

