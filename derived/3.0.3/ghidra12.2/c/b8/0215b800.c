
bool FUN_0215b800(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  void *__dest;
  void *__src;
  ulong local_90;
  undefined2 local_88;
  undefined1 auStack_86 [10];
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  byte local_58 [4];
  uint local_54;
  uint local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  cVar5 = **(char **)(param_1 + 0x6e8);
  if (cVar5 == '\0') goto LAB_0215bd90;
  if (**(char **)(param_1 + 0x798) != '\0') {
    local_60 = FUN_01ad5de0(param_1 + 0x790);
    uStack_5e = 0;
    uStack_5c = 0;
    FUN_0277d4ac(&local_60);
    uVar11 = FUN_0277dedc(&local_60);
    puVar8 = PTR_DAT_04bb43c0;
    if ((uVar11 & 1) == 0) {
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = CONCAT22(uStack_5e,local_60);
      uStack_6c = uStack_5c;
      lVar15 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar8 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_60);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
             (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8), lVar15 != 0)) {
            local_68 = lVar15;
          }
        }
      }
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_01adab50(&local_78,local_58);
      uVar10 = 0;
      do {
        local_54 = uVar10;
        if ((local_54 != 0) && (local_38 = local_54, local_54 < 0xe)) {
          local_90 = CONCAT44(local_90._4_4_,local_54);
          uVar10 = local_54 + 7;
          if (-1 < (int)local_54) {
            uVar10 = local_54;
          }
          if (((uint)((int)uVar10 >> 3) < 2) &&
             (local_90 = CONCAT44(local_90._4_4_,local_54),
             (local_58[(uint)((int)uVar10 >> 3)] >> (ulong)(local_54 & 7) & 1) != 0)) {
            if (local_54 == 9) {
              FUN_01e57c78(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0),&local_60,0,1);
              puVar8 = PTR_DAT_04bb27d0;
              lVar15 = **(long **)PTR_DAT_04bb27d0;
              bVar6 = *(byte *)(lVar15 + 0x473);
              if ((long)(char)bVar6 == 0xffffffffffffffff) {
LAB_0215ba98:
                FUN_02189da0(*(undefined8 *)PTR_DAT_04bb46e8,*(long *)(param_1 + 8) + 0x3e0,
                             &local_60);
              }
              else {
                pbVar1 = (byte *)(lVar15 + 0x48);
                uVar11 = (long)(char)bVar6 & 0xffffffff;
                pbVar3 = pbVar1 + uVar11 * 0x80;
                if (7 < bVar6) {
                  pbVar3 = pbVar1;
                }
                if ((*pbVar3 >> 3 & 1) == 0) goto LAB_0215ba98;
                lVar15 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
                lVar16 = lVar15 + uVar11 * 0xc;
                if (0xb < bVar6) {
                  lVar16 = lVar15;
                }
                if (*(char *)(lVar16 + 10) != '\0') goto LAB_0215ba98;
              }
              uVar11 = FUN_01e3e21c(*(undefined8 *)(param_1 + 8));
              if ((uVar11 & 1) != 0) {
                lVar16 = *(long *)(param_1 + 8);
                local_7c = 0;
                local_88 = (undefined2)*(undefined4 *)(lVar16 + 0x508);
                local_90 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
                (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
                lVar15 = 0;
                goto LAB_0215bafc;
              }
            }
            break;
          }
        }
        uVar10 = local_54 + 1;
      } while (local_54 + 1 != 0xe);
    }
  }
  goto LAB_0215b860;
  while( true ) {
    lVar2 = *(long *)(lVar16 + 1000) + lVar15;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_0215bdc0;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_0215bdc0;
    }
    lVar15 = lVar15 + 3;
    if (lVar15 == 0x80001) break;
LAB_0215bafc:
    if (*(char *)(*(long *)(lVar16 + 1000) + lVar15) == '\0') goto LAB_0215bdc0;
  }
  lVar15 = 0;
LAB_0215bdc0:
  uVar10 = (uint)lVar15;
  if (9 < uVar10) {
    uVar10 = 10;
  }
  (**(code **)(*(long *)(lVar16 + 0x3e0) + 0x18))(lVar16 + 0x3e0);
  memcpy(auStack_86,*(void **)(lVar16 + 1000),(ulong)uVar10);
  local_38 = 0;
  local_32 = 0;
  local_34 = 0xff00;
  if (-1 < DAT_053d0920) {
    FUN_01db1df0(**(long **)puVar8 + 0x480,DAT_053d0920,&local_38,&local_90,0x16,0);
  }
LAB_0215b860:
  pcVar14 = *(char **)(param_1 + 0x740);
  if ((((*pcVar14 != 'c') || (pcVar14[1] != 'm')) || (pcVar14[2] != 'l')) ||
     (uVar11 = FUN_0180b7a0(), puVar8 = PTR_DAT_04bb2720, (uVar11 & 1) != 0)) {
LAB_0215bc4c:
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    local_90 = local_90 & 0xffffffff00000000;
    lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
    FUN_01e5a930(0x40000000,lVar15,0xd,PTR_DAT_04bb2150,&local_78,&local_90,PTR_DAT_04bc1600,0);
    __dest = *(void **)(lVar15 + 0x3b8);
    (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
    __src = *(void **)(param_1 + 0x6e8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
      lVar16 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x6e8) + lVar16) == '\0') goto LAB_0215bd0c;
        lVar2 = *(long *)(param_1 + 0x6e8) + lVar16;
        if (*(char *)(lVar2 + 1) == '\0') goto LAB_0215bd00;
        if (*(char *)(lVar2 + 2) == '\0') goto LAB_0215bd08;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
LAB_0215bcf8:
      lVar16 = 0;
      goto LAB_0215bd0c;
    }
    goto LAB_0215bd38;
  }
  lVar15 = *(long *)PTR_DAT_04bb2720;
  iVar13 = 0;
  if (lVar15 != 0) {
    if (*(long *)(lVar15 + 0x330) == 0) {
      iVar13 = 0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar9 = FUN_006bd550(*puVar12,0);
      iVar13 = 0;
      if (iVar9 == 0x758f7eaf) {
        iVar13 = 0;
        if (*(long *)puVar8 != 0) {
          lVar15 = *(long *)(*(long *)puVar8 + 0x330);
          iVar13 = 0;
          if (lVar15 != 0) {
            iVar13 = *(int *)(lVar15 + 0x244);
          }
        }
      }
    }
  }
  if ((*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar13) ||
     (sVar7 = *(short *)PTR_DAT_04bb6298, sVar7 == -1)) goto LAB_0215bc4c;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x17);
  puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
  if (0xff < (uint)(int)sVar7) {
    puVar4 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar4 >> 0x17 & 1) == 0) goto LAB_0215bc4c;
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 2) {
    local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
    local_90 = local_90 & 0xffffffff00000000;
    FUN_01e5a930(0x40000000,lVar15,0xd,PTR_DAT_04bb2150,&local_78,&local_90,PTR_DAT_04bc1600,6);
    __dest = *(void **)(lVar15 + 0x3b8);
    (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
    __src = *(void **)(param_1 + 0x6e8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
      lVar16 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x6e8) + lVar16) == '\0') goto LAB_0215bd0c;
        lVar2 = *(long *)(param_1 + 0x6e8) + lVar16;
        if (*(char *)(lVar2 + 1) == '\0') goto LAB_0215bd00;
        if (*(char *)(lVar2 + 2) == '\0') goto LAB_0215bd08;
        lVar16 = lVar16 + 3;
      } while (lVar16 != 0x80001);
      goto LAB_0215bcf8;
    }
    goto LAB_0215bd38;
  }
  goto LAB_0215bd40;
LAB_0215bd00:
  lVar16 = lVar16 + 1;
  goto LAB_0215bd0c;
LAB_0215bd08:
  lVar16 = lVar16 + 2;
LAB_0215bd0c:
  iVar13 = (int)lVar16;
  if (*(int *)(lVar15 + 0x3c0) <= (int)lVar16) {
    iVar13 = *(int *)(lVar15 + 0x3c0) + -1;
  }
  memcpy(__dest,__src,(long)iVar13);
  *(undefined1 *)((long)__dest + (long)iVar13) = 0;
LAB_0215bd38:
  *(undefined4 *)(lVar15 + 0x3a0) = 0;
  *(undefined1 *)(lVar15 + 0x410) = 0;
LAB_0215bd40:
  if ((*(byte *)(param_1 + 0x7f1) & 1) != 0) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
    lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
    *(ushort *)(lVar15 + 0xad28) = *(ushort *)(lVar15 + 0xad28) | 0x10;
    FUN_0212eca8(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xaa50,1,0);
  }
LAB_0215bd90:
  return cVar5 != '\0';
}

