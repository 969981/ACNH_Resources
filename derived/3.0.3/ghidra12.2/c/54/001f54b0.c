
int FUN_001f54b0(byte *param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  byte *pbVar12;
  uint uVar13;
  int unaff_w20;
  undefined8 *puVar14;
  byte local_128;
  char local_127;
  byte local_126;
  undefined8 *local_120;
  char local_118;
  void *local_110;
  undefined8 *local_108;
  ushort local_fc [2];
  undefined1 local_f8 [8];
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  long lStack_d0;
  ushort local_c8;
  
  do {
    if ((param_1[0x20] == 0) ||
       ((*(code **)(param_1 + 0x10f8) != (code *)0x0 &&
        (iVar3 = (**(code **)(param_1 + 0x10f8))(param_1,*(undefined8 *)(param_1 + 0x1110)),
        iVar3 == 0)))) goto LAB_001f5b38;
    memset(&local_128,0,0x28);
    lVar5 = FUN_001f69f0(*(undefined8 *)(param_1 + 0x18),&local_128);
    pvVar2 = local_e0;
    if (lVar5 < 0) {
      if ((lVar5 != -100) ||
         ((*(int *)(param_1 + 0x70) != -0x191 && (*(int *)(param_1 + 0x70) != 0)))) {
        param_1[0x20] = 0;
        if ((param_1[0x21] != 0) && ((param_1[0x11] >> 1 & 1) == 0)) {
          local_f8[0] = 8;
          local_f0 = &local_e0;
          local_e8 = 0;
          iVar3 = FUN_001f4fa0(param_1,local_f8);
          if (iVar3 == 0) {
            param_1[0x11] = param_1[0x11] | 2;
          }
          else if (iVar3 != -0x12e) {
            return iVar3;
          }
        }
        return -400;
      }
      goto LAB_001f5b38;
    }
    if ((local_127 != '\0') || ((param_1[0x10] != 0) != (local_118 != '\0'))) {
LAB_001f5abc:
      param_1[0x20] = 0;
      if ((param_1[0x21] != 0) && ((param_1[0x11] >> 1 & 1) == 0)) {
        uVar9 = 0x3ea;
LAB_001f5ad4:
        local_fc[0] = FUN_001f63d0(uVar9);
        memcpy(&local_e0,local_fc,2);
        memcpy((void *)((long)&local_e0 + 2),(void *)0x0,0);
        local_f8[0] = 8;
        local_e8 = 2;
        local_f0 = &local_e0;
        iVar3 = FUN_001f4fa0(param_1,local_f8);
        if (iVar3 == 0) {
          param_1[0x11] = param_1[0x11] | 2;
          return 0;
        }
        if (iVar3 != -0x12e) {
          return iVar3;
        }
      }
      goto LAB_001f5b38;
    }
    pbVar12 = *(byte **)(param_1 + 0x58);
    if (pbVar12[2] == 0xff) {
      if ((10 < local_126) || ((1 << (ulong)(local_126 & 0x1f) & 0x706U) == 0)) goto LAB_001f5abc;
      pbVar12[1] = 0;
      pbVar12[2] = local_126;
      pbVar12[0x10] = 0;
      pbVar12[0x11] = 0;
      pbVar12[0x12] = 0;
      pbVar12[0x13] = 0;
      pbVar12[0x14] = 0;
      pbVar12[0x15] = 0;
      pbVar12[0x16] = 0;
      pbVar12[0x17] = 0;
LAB_001f55fc:
      *pbVar12 = local_128;
      if ((ulong)((long)local_120 + *(long *)(pbVar12 + 0x10)) <= *(ulong *)(param_1 + 8)) {
LAB_001f5618:
        *(undefined8 **)(param_1 + 0x60) = local_120;
        if (*(code **)(param_1 + 0x10d8) != (code *)0x0) {
          local_d8 = local_120;
          local_e0._3_5_ = SUB85(pvVar2,3);
          local_e0._0_3_ = CONCAT12(local_126,(ushort)local_128);
          (**(code **)(param_1 + 0x10d8))(param_1,&local_e0,*(undefined8 *)(param_1 + 0x1110));
        }
        puVar14 = local_120;
        if ((((*param_1 & 1) == 0) || ((local_126 >> 3 & 1) != 0)) &&
           (local_120 != (undefined8 *)0x0)) {
          lVar5 = *(long *)(param_1 + 0x58);
          plVar6 = (long *)FUN_001f4e40(0x10);
          if (plVar6 == (long *)0x0) {
            param_1[0x20] = 0;
            return -500;
          }
          memset(plVar6,0,0x10);
          lVar7 = FUN_001f4e40(puVar14);
          *plVar6 = lVar7;
          if (lVar7 == 0) {
            FUN_001f4e60(plVar6);
            param_1[0x20] = 0;
            return -500;
          }
          plVar6[1] = (long)puVar14;
          iVar3 = FUN_001f6460(*(undefined8 *)(lVar5 + 8),plVar6);
          if (iVar3 != 0) {
            param_1[0x20] = 0;
            return iVar3;
          }
          *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + (long)puVar14;
        }
        goto LAB_001f56b0;
      }
LAB_001f5bbc:
      param_1[0x20] = 0;
      if ((param_1[0x21] != 0) && ((param_1[0x11] >> 1 & 1) == 0)) {
        uVar9 = 0x3f1;
        goto LAB_001f5ad4;
      }
      goto LAB_001f5b38;
    }
    if ((*(long *)(param_1 + 0x60) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
      if (local_126 - 8 < 3) {
        param_1[0x41] = 0;
        param_1[0x42] = local_126;
        param_1[0x40] = local_128;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x52] = 0;
        param_1[0x53] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x56] = 0;
        param_1[0x57] = 0;
        *(byte **)(param_1 + 0x58) = param_1 + 0x40;
        if ((ulong)((long)local_120 + *(long *)(param_1 + 0x50)) <= *(ulong *)(param_1 + 8))
        goto LAB_001f5618;
        goto LAB_001f5bbc;
      }
      if (local_126 == 0) goto LAB_001f55fc;
      uVar9 = 0x3ea;
LAB_001f5c1c:
      iVar3 = FUN_001f5c60(param_1,uVar9,0,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      goto LAB_001f5b38;
    }
LAB_001f56b0:
    lVar5 = *(long *)(param_1 + 0x58);
    cVar11 = *(char *)(lVar5 + 2);
    if ((cVar11 == '\b') || (cVar11 == '\x01')) {
      puVar14 = (undefined8 *)((ulong)(cVar11 == '\b') * 2);
      lVar7 = (long)local_108 + (ulong)(cVar11 == '\b') * -2;
      if (puVar14 <= local_108 && lVar7 != 0) {
        uVar13 = *(uint *)(lVar5 + 4);
        pbVar12 = (byte *)((long)local_110 + (long)puVar14);
        do {
          uVar13 = (uint)(byte)(&DAT_0410bda3)[uVar13 + (byte)(&DAT_0410bda3)[*pbVar12] + 0x100];
          *(uint *)(lVar5 + 4) = uVar13;
          if (uVar13 == 0xc) {
            param_1[0x20] = 0;
            if ((param_1[0x21] != 0) && ((param_1[0x11] >> 1 & 1) == 0)) {
              local_fc[0] = FUN_001f63d0(0x3ef);
              memcpy(&local_e0,local_fc,2);
              memcpy((void *)((long)&local_e0 + 2),(void *)0x0,0);
              local_f8[0] = 8;
              local_f0 = &local_e0;
              local_e8 = 2;
              iVar3 = FUN_001f4fa0(param_1,local_f8);
              if (iVar3 == 0) {
                param_1[0x11] = param_1[0x11] | 2;
                iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 4);
                goto joined_r0x001f5a04;
              }
              if (iVar3 != -0x12e) {
                return iVar3;
              }
            }
            break;
          }
          lVar7 = lVar7 + -1;
          pbVar12 = pbVar12 + 1;
        } while (lVar7 != 0);
      }
    }
    iVar3 = *(int *)(*(long *)(param_1 + 0x58) + 4);
joined_r0x001f5a04:
    if (iVar3 == 0xc) goto LAB_001f5b38;
    if (*(code **)(param_1 + 0x10e0) != (code *)0x0) {
      local_e0 = local_110;
      local_d8 = local_108;
      (**(code **)(param_1 + 0x10e0))(param_1,&local_e0,*(undefined8 *)(param_1 + 0x1110));
    }
    if (local_108 == (undefined8 *)0x0) {
      if (*(long *)(param_1 + 0x68) == *(long *)(param_1 + 0x60)) goto LAB_001f582c;
LAB_001f54f4:
      iVar3 = 0;
      goto LAB_001f54f8;
    }
    if (((*param_1 & 1) == 0) || ((local_126 >> 3 & 1) != 0)) {
      plVar6 = (long *)FUN_001f6560(*(undefined8 *)(*(long *)(param_1 + 0x58) + 8));
      memcpy((void *)(*plVar6 + *(long *)(param_1 + 0x68)),local_110,(size_t)local_108);
    }
    lVar5 = *(long *)(param_1 + 0x68);
    *(long *)(param_1 + 0x68) = lVar5 + (long)local_108;
    if (lVar5 + (long)local_108 != *(long *)(param_1 + 0x60)) goto LAB_001f54f4;
LAB_001f582c:
    pcVar8 = *(char **)(param_1 + 0x58);
    cVar11 = *pcVar8;
    if ((cVar11 != '\0') &&
       (((pcVar8[2] == '\b' || (pcVar8[2] == '\x01')) && (*(int *)(pcVar8 + 4) != 0)))) {
      uVar9 = 0x3ef;
      goto LAB_001f5c1c;
    }
    if (*(code **)(param_1 + 0x10e8) != (code *)0x0) {
      (**(code **)(param_1 + 0x10e8))(param_1,*(undefined8 *)(param_1 + 0x1110));
      pcVar8 = *(char **)(param_1 + 0x58);
      cVar11 = *pcVar8;
    }
    if (cVar11 == '\0') {
LAB_001f5ab0:
      iVar3 = 0;
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      param_1[0x62] = 0;
      param_1[99] = 0;
      param_1[100] = 0;
      param_1[0x65] = 0;
      param_1[0x66] = 0;
      param_1[0x67] = 0;
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
    }
    else {
      if ((*(long *)(param_1 + 0x10f0) == 0) && ((pcVar8[2] & 0xfeU) != 8)) {
LAB_001f5a9c:
        FUN_001f5e10(pcVar8);
        if (*(byte **)(param_1 + 0x58) == param_1 + 0x40) {
          *(byte **)(param_1 + 0x58) = param_1 + 0x28;
        }
        goto LAB_001f5ab0;
      }
      local_fc[0] = 0;
      if (((*param_1 & 1) == 0) || ((local_126 >> 3 & 1) != 0)) {
        puVar14 = (undefined8 *)
                  FUN_001f5d60(*(undefined8 *)(pcVar8 + 8),*(undefined8 *)(pcVar8 + 0x10));
        pcVar8 = *(char **)(param_1 + 0x58);
        lVar5 = *(long *)(pcVar8 + 0x10);
        if ((lVar5 != 0) && (puVar14 == (undefined8 *)0x0)) {
          param_1[0x20] = 0;
          iVar3 = 1;
          unaff_w20 = -500;
          goto LAB_001f54f8;
        }
      }
      else {
        puVar14 = (undefined8 *)0x0;
        lVar5 = 0;
      }
      if (pcVar8[2] != '\t') {
        if (pcVar8[2] == '\b') {
          if (*(ulong *)(pcVar8 + 0x10) < 2) {
            uVar13 = (uint)local_fc[0];
            lVar7 = 0;
            lVar10 = 0;
          }
          else {
            memcpy(local_fc,puVar14,2);
            uVar13 = FUN_001f63d0(local_fc[0]);
            local_fc[0] = (ushort)uVar13;
            if ((1999 < (uVar13 - 3000 & 0xffff)) &&
               (0xb < (uVar13 - 1000 & 0xffff) || 0xfffc < (uVar13 - 0x3ef & 0xffff))) {
              FUN_001f4e60(puVar14);
              iVar4 = FUN_001f5c60(param_1,0x3ea,0,0);
              iVar3 = 3;
              if (iVar4 != 0) {
                iVar3 = 1;
                unaff_w20 = iVar4;
              }
              goto LAB_001f54f8;
            }
            lVar7 = (long)puVar14 + 2;
            lVar10 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) + -2;
          }
          param_1[0x11] = param_1[0x11] | 1;
          uVar1 = 0x3ed;
          if ((uVar13 & 0xffff) != 0) {
            uVar1 = (short)uVar13;
          }
          *(undefined2 *)(param_1 + 0x12) = uVar1;
          iVar4 = FUN_001f5c60(param_1,uVar13,lVar7,lVar10);
          if (iVar4 != 0) {
            FUN_001f4e60(puVar14);
            iVar3 = 1;
            unaff_w20 = iVar4;
            goto LAB_001f54f8;
          }
        }
LAB_001f5a5c:
        if (*(code **)(param_1 + 0x10f0) != (code *)0x0) {
          uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x58) + 1);
          local_c8 = local_fc[0];
          param_1[0x70] = 0;
          param_1[0x71] = 0;
          param_1[0x72] = 0;
          param_1[0x73] = 0;
          local_e0 = (void *)CONCAT62(local_e0._2_6_,uVar1);
          local_d8 = puVar14;
          lStack_d0 = lVar5;
          (**(code **)(param_1 + 0x10f0))(param_1,&local_e0,*(undefined8 *)(param_1 + 0x1110));
        }
        FUN_001f4e60(puVar14);
        pcVar8 = *(char **)(param_1 + 0x58);
        goto LAB_001f5a9c;
      }
      local_f8[0] = 10;
      local_e8 = *(undefined8 *)(pcVar8 + 0x10);
      local_f0 = puVar14;
      iVar3 = FUN_001f4fa0(param_1,local_f8);
      if ((iVar3 != -0x12e) && (iVar3 != 0)) {
        param_1[0x20] = 0;
        FUN_001f4e60(puVar14);
        unaff_w20 = iVar3;
      }
      if ((iVar3 == 0) || (iVar3 == -0x12e)) goto LAB_001f5a5c;
      iVar3 = 1;
    }
LAB_001f54f8:
    if (iVar3 != 0) {
      if (iVar3 == 3) {
LAB_001f5b38:
        unaff_w20 = 0;
      }
      return unaff_w20;
    }
  } while( true );
}

