
void FUN_01c8fc10(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined *local_110;
  char *local_108;
  byte local_100 [56];
  long local_c8;
  char *local_c0;
  undefined1 auStack_88 [8];
  long local_80;
  long lStack_78;
  undefined *local_70;
  char *local_68;
  byte local_48 [4];
  byte local_44 [4];
  
  puVar6 = PTR_DAT_04bb27d0;
  puVar5 = PTR_DAT_04bb2020;
  lVar16 = *(long *)(param_1 + 8);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  if (param_2 == "message_card") {
LAB_01c8fca0:
    if (*(long *)(param_2 + 0x20) == *(long *)(lVar16 + 0xa0)) {
      *(undefined1 *)(lVar16 + 0xa8) = 1;
      return;
    }
  }
  else {
    uVar13 = 0;
    bVar8 = true;
    do {
      if (param_2[uVar13] != "message_card"[uVar13]) break;
      if (param_2[uVar13] == '\0') {
        if (bVar8) goto LAB_01c8fca0;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
  }
  local_44[0] = 0xff;
  lVar10 = **(long **)PTR_DAT_04bb27d0;
  local_68 = param_2;
  if (*(byte *)(lVar10 + 0x476) < 2) {
    FUN_02507c6c(local_100,7,1,0,0);
    if (local_100[0] < 8) {
      lVar10 = FUN_026585a0(local_100);
      bVar8 = local_100[0] < 8;
      if (lVar10 != *(long *)(param_2 + 0x20)) {
        do {
          if (!bVar8) goto LAB_01c8feac;
          uVar13 = (ulong)local_100[0];
          do {
            uVar17 = uVar13;
            if (uVar17 == 7) goto LAB_01c8feac;
            uVar9 = FUN_02507924(local_100,&DAT_0548e169 + uVar17);
            uVar13 = uVar17 + 1;
          } while ((uVar9 & 1) == 0);
          if (7 < (byte)(&DAT_0548e169)[uVar17]) goto LAB_01c8feac;
          local_100[0] = (&DAT_0548e169)[uVar17];
          lVar10 = FUN_026585a0(local_100);
          bVar8 = local_100[0] < 8;
        } while (lVar10 != *(long *)(param_2 + 0x20));
      }
      local_48[0] = local_100[0];
      if (!bVar8) {
        local_48[0] = 0xff;
      }
      goto LAB_01c8fe98;
    }
  }
  else {
    if (DAT_04cd19d8 == 0) {
      local_100[0] = DAT_0548e140;
      if (7 < DAT_0548e140) goto LAB_01c8fd9c;
LAB_01c8fe60:
      if (7 < local_100[0]) {
        local_100[0] = 0xff;
        goto LAB_01c8feac;
      }
    }
    else {
      pbVar11 = &DAT_0548e140;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar11 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      local_100[0] = *pbVar11;
      if ((local_100[0] < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (local_100[0] = *(byte *)(DAT_054f5738 + 0x11a5), local_100[0] < 8)))) goto LAB_01c8fe60;
LAB_01c8fd9c:
      bVar12 = *(byte *)(lVar10 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar12 != 0xffffffffffffffff) {
        puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar3 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar3 & 8) != 0) {
          pbVar11 = (byte *)(lVar10 + 0x471);
        }
      }
      local_100[0] = *pbVar11;
      if (7 < local_100[0]) {
        local_100[0] = *PTR_DAT_04bb5038;
        goto LAB_01c8fe60;
      }
    }
    lVar10 = FUN_026585a0(local_100);
    if (lVar10 == *(long *)(param_2 + 0x20)) {
      local_48[0] = local_100[0];
      if (7 < local_100[0]) {
        local_48[0] = 0xff;
      }
LAB_01c8fe98:
      local_44[0] = local_48[0];
      FUN_007b36c8(&local_80,local_48);
    }
  }
LAB_01c8feac:
  FUN_006e1134(local_100,param_2);
  local_110 = puVar5 + 0x10;
  local_108 = "friend";
  (**(code **)(local_70 + 0x18))(&local_70);
  (**(code **)(local_70 + 0x18))(&local_70);
  pcVar7 = local_68;
  (**(code **)(local_110 + 0x18))(&local_110);
  if (pcVar7 == local_108) {
LAB_01c8ff44:
    if (*(long *)(param_2 + 0x20) == *(long *)(lVar16 + 0xa0)) {
      local_110 = puVar5 + 0x10;
      local_108 = "add";
      (**(code **)(local_c8 + 0x18))(&local_c8);
      (**(code **)(local_c8 + 0x18))(&local_c8);
      pcVar7 = local_c0;
      (**(code **)(local_110 + 0x18))(&local_110);
      if (pcVar7 == local_108) {
LAB_01c8fff0:
        FUN_01dbf918(*(undefined8 *)puVar6,local_44,auStack_88);
      }
      else {
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_c0[uVar13] != local_108[uVar13]) break;
          if (local_c0[uVar13] == '\0') {
            if (bVar8) goto LAB_01c8fff0;
            break;
          }
          bVar8 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_110 = puVar5 + 0x10;
        local_108 = "delete";
        (**(code **)(local_c8 + 0x18))(&local_c8);
        (**(code **)(local_c8 + 0x18))(&local_c8);
        pcVar7 = local_c0;
        (**(code **)(local_110 + 0x18))(&local_110);
        if (pcVar7 == local_108) {
LAB_01c90094:
          FUN_01dbfa0c(*(undefined8 *)puVar6,local_44,auStack_88);
        }
        else {
          uVar13 = 0;
          bVar8 = true;
          do {
            if (local_c0[uVar13] != local_108[uVar13]) break;
            if (local_c0[uVar13] == '\0') {
              if (bVar8) goto LAB_01c90094;
              break;
            }
            bVar8 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
        }
      }
    }
  }
  else {
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_68[uVar13] != local_108[uVar13]) break;
      if (local_68[uVar13] == '\0') {
        if (bVar8) goto LAB_01c8ff44;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
  }
  if (7 < local_44[0]) {
    return;
  }
  local_110 = puVar5 + 0x10;
  local_108 = "friend";
  (**(code **)(local_70 + 0x18))(&local_70);
  (**(code **)(local_70 + 0x18))(&local_70);
  pcVar7 = local_68;
  (**(code **)(local_110 + 0x18))(&local_110);
  if (pcVar7 == local_108) {
LAB_01c90140:
    if (local_80 != 0 || lStack_78 != 0) {
      uVar14 = 0;
LAB_01c90250:
      if ((local_80 != 0 || lStack_78 != 0) &&
         (uVar4 = *(uint *)(*(long *)PTR_DAT_04bb49f8 + 8), uVar4 != 0)) {
        lVar10 = *(long *)(*(long *)PTR_DAT_04bb49f8 + 0x10);
        uVar15 = 0;
        do {
          plVar1 = (long *)(lVar10 + ((long)((ulong)uVar15 << 0x20) >> 0x1a));
          if (*plVar1 == local_80 && plVar1[1] == lStack_78) {
            lVar2 = lVar10 + (long)(int)uVar15 * 0x40;
            *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) | (byte)(1 << (ulong)uVar14);
          }
          uVar15 = uVar15 + 1;
        } while (uVar4 != uVar15);
      }
    }
  }
  else {
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_68[uVar13] != local_108[uVar13]) break;
      if (local_68[uVar13] == '\0') {
        if (bVar8) goto LAB_01c90140;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    (**(code **)(local_70 + 0x18))(&local_70);
    (**(code **)(local_70 + 0x18))(&local_70);
    if (local_68 == "sent_friend_request") {
LAB_01c901c0:
      if (local_80 != 0 || lStack_78 != 0) {
        uVar14 = 1;
        goto LAB_01c90250;
      }
    }
    else {
      uVar13 = 0;
      bVar8 = true;
      do {
        if (local_68[uVar13] != "sent_friend_request"[uVar13]) break;
        if (local_68[uVar13] == '\0') {
          if (bVar8) goto LAB_01c901c0;
          break;
        }
        bVar8 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      (**(code **)(local_70 + 0x18))(&local_70);
      (**(code **)(local_70 + 0x18))(&local_70);
      if (local_68 != "received_friend_request") {
        uVar13 = 0;
        bVar8 = true;
        do {
          if (local_68[uVar13] != "received_friend_request"[uVar13]) break;
          if (local_68[uVar13] == '\0') {
            if (bVar8) goto LAB_01c90240;
            break;
          }
          bVar8 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        goto LAB_01c90308;
      }
LAB_01c90240:
      if (local_80 != 0 || lStack_78 != 0) {
        uVar14 = 2;
        goto LAB_01c90250;
      }
    }
  }
  local_110 = puVar5 + 0x10;
  local_108 = "FriendListNotifyUpdate";
  FUN_0274bfe8(local_44,&local_110,1);
  bVar12 = local_44[0];
  if (7 < local_44[0]) {
    bVar12 = 0xff;
  }
  local_110 = (undefined *)CONCAT71(local_110._1_7_,bVar12);
  FUN_02f095f0(&local_110);
LAB_01c90308:
  (**(code **)(local_70 + 0x18))(&local_70);
  (**(code **)(local_70 + 0x18))(&local_70);
  if (local_68 == "reward") {
LAB_01c90374:
    if (*(long *)(param_2 + 0x20) == *(long *)(lVar16 + 0xa0)) {
      *(undefined1 *)(*(long *)PTR_DAT_04bc10e0 + 0x38) = 1;
    }
  }
  else {
    uVar13 = 0;
    bVar8 = true;
    do {
      if (local_68[uVar13] != "reward"[uVar13]) {
        return;
      }
      if (local_68[uVar13] == '\0') {
        if (!bVar8) {
          return;
        }
        goto LAB_01c90374;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
  }
  return;
}

