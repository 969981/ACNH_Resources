
bool FUN_0215be40(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 *__dest;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined1 *__src;
  undefined4 local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined5 local_11c;
  undefined3 uStack_117;
  undefined5 uStack_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined *local_d8;
  undefined1 *local_d0;
  int local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined8 local_68;
  
  pcVar5 = *(char **)(param_1 + 0x6e8);
  cVar3 = *pcVar5;
  if (cVar3 != '\0') {
    if ((((*(uint *)(param_1 + 0x7f0) >> 7 & 1) == 0) && (cVar3 == 'N')) &&
       (((((pcVar5[1] == 'p' &&
           ((((pcVar5[2] == 'c' && (pcVar5[3] == 'S')) && (pcVar5[4] == 'p')) &&
            ((pcVar5[5] == 'T' && (pcVar5[6] == 'a')))))) &&
          ((pcVar5[7] == 'm' &&
           (((pcVar5[8] == 'b' && (pcVar5[9] == 'o')) &&
            ((pcVar5[10] == 'u' &&
             (((pcVar5[0xb] == 'r' && (pcVar5[0xc] == 'i')) && (pcVar5[0xd] == 'n')))))))))) &&
         ((((pcVar5[0xe] == 'e' && (pcVar5[0xf] == 'S')) && (pcVar5[0x10] == 'o')) &&
          (((pcVar5[0x11] == 'u' && (pcVar5[0x12] == 'n')) && (pcVar5[0x13] == 'd')))))) ||
        ((((((pcVar5[1] == 'p' && (pcVar5[2] == 'c')) && (pcVar5[3] == 'M')) &&
           ((pcVar5[4] == 'c' && (pcVar5[5] == 'a')))) &&
          (((pcVar5[6] == 's' && ((pcVar5[7] == 'S' && (pcVar5[8] == 'o')))) && (pcVar5[9] == 'u')))
          ) && ((pcVar5[10] == 'n' && (pcVar5[0xb] == 'd')))))))) {
      *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x480;
    }
    else {
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      cVar7 = cVar3;
      if ((*(byte *)(lVar9 + 0xad5b) >> 4 & 1) != 0) {
        lVar6 = *(long *)(lVar9 + 0x18);
        uVar1 = *(byte *)(lVar6 + 0x290) & 0xffffffef;
        *(char *)(lVar6 + 0x290) = (char)uVar1;
        uVar8 = 3;
        if (((uVar1 >> 3 & 1) == 0) && (uVar8 = 2, (uVar1 >> 2 & 1) == 0)) {
          uVar8 = uVar1 >> 1 & 1;
        }
        *(uint *)(lVar6 + 0x294) = uVar8;
        *(ulong *)(lVar9 + 0xad58) = *(ulong *)(lVar9 + 0xad58) & 0xffffffffefffffff;
        pcVar5 = *(char **)(param_1 + 0x6e8);
        cVar7 = *pcVar5;
      }
      if ((((((cVar7 == 'M') && (pcVar5[1] == 'a')) && (pcVar5[2] == 'R')) &&
           ((pcVar5[3] == 'e' && (pcVar5[4] == 'S')))) &&
          ((pcVar5[5] == 'l' && ((pcVar5[6] == 'e' && (pcVar5[7] == 'e')))))) && (pcVar5[8] == 'p'))
      {
        local_178[0] = 4;
        *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) | 0x100;
        lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
        *(ushort *)(lVar9 + 0xad28) = *(ushort *)(lVar9 + 0xad28) | 0x10;
        FUN_0212eca8(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0xaa50,1,0);
      }
      local_178[0] = 0;
      local_13c = 0;
      uStack_138 = 0xfffe;
      local_160 = 0;
      local_134 = 0;
      local_170 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_168 = PTR_DAT_04bb2010 + 0x10;
      local_150 = 0;
      local_158 = puStack_168;
      FUN_0277d4ac(&uStack_138);
      local_11c = 0;
      uStack_117 = 0;
      uStack_114 = 0;
      local_120 = 0xbf800000;
      local_130 = 0x41c8000041800000;
      uStack_128 = 0xbf800000bf800000;
      local_10c = 0xfffe;
      FUN_0277d4ac(&local_10c);
      local_104 = 0;
      local_c8 = 0x20;
      local_98 = local_8c;
      local_90 = 0x20;
      local_d0 = local_c4;
      local_a5 = 0;
      local_d8 = PTR_DAT_04bb2028 + 0x10;
      local_c4[0] = 0;
      local_6d = 0;
      local_8c[0] = 0;
      local_178[0] = 0;
      local_160 = 0;
      uStack_140 = 0;
      local_13c = 0;
      local_68 = 0xfffe;
      local_150 = 0;
      uStack_148 = 0;
      local_a0 = local_d8;
      FUN_0277d4ac(&local_68);
      uStack_138 = (undefined4)local_68;
      local_134 = local_68._4_4_;
      local_130 = 0x41c8000041800000;
      uStack_128 = 0xbf800000bf800000;
      local_120 = 0xbf800000;
      local_11c = 0;
      uStack_117 = 0;
      uStack_114 = 0;
      local_68 = 0xfffe;
      FUN_0277d4ac(&local_68);
      local_104 = 0;
      local_100 = 0;
      local_fc = 0;
      local_f4 = 0;
      local_ec = 0;
      local_e4 = 0;
      local_dc = 0;
      local_10c = local_68;
      *local_d0 = 0;
      *local_98 = 0;
      __dest = local_d0;
      (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
      __src = *(undefined1 **)(param_1 + 0x6e8);
      if (__dest != __src) {
        (**(code **)(*(long *)(param_1 + 0x6e0) + 0x18))(param_1 + 0x6e0);
        lVar9 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x6e8) + lVar9) == '\0') goto LAB_0215c30c;
          lVar6 = *(long *)(param_1 + 0x6e8) + lVar9;
          if (*(char *)(lVar6 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0215c30c;
          }
          if (*(char *)(lVar6 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0215c30c;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0215c30c:
        iVar2 = (int)lVar9;
        if (local_c8 <= (int)lVar9) {
          iVar2 = local_c8 + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        __dest[iVar2] = 0;
      }
      plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
      if ((int)plVar4[0xef6] != 0x2a) {
        (**(code **)(*plVar4 + 0x38))(plVar4,0x2a,local_178,1);
      }
      *(undefined4 *)(param_1 + 0x7ec) = 1;
    }
  }
  return cVar3 != '\0';
}

