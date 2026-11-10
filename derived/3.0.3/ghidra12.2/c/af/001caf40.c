
void FUN_001caf40(long *param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t sVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined *puVar17;
  size_t *psVar18;
  long lVar19;
  short sVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint uVar25;
  long lVar26;
  size_t sVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined1 auStack_c0 [24];
  undefined8 local_a8 [5];
  undefined8 *local_80;
  undefined8 local_78;
  size_t local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_04bcb908;
  puVar5 = PTR_DAT_04bcb900;
  uVar3 = *(ushort *)(param_2 + 0x60);
  if ((*(uint *)(param_1[1] + 8) & 0xfffffff7) == 2) {
    if (((((uVar3 & 0x1f) == 0x10) &&
         (uVar12 = (**(code **)(*param_1 + 0x40))(param_1), (uVar12 & 1) != 0)) &&
        ((char)param_1[0x21] == '\0')) && ((*(byte *)(param_2 + 0xd1) & 1) != 0)) {
      uVar15 = 8;
      goto LAB_001cafb4;
    }
  }
  else if ((uVar3 & 0x281f) == 2) {
    plVar21 = (long *)(PTR_DAT_04bcb900 + 0x80);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar13 = (uint *)FUN_03876070(DAT_04c58c60);
      uVar25 = *puVar13;
      if (uVar25 != 0) {
        lVar26 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar26 >> 3) <= (ulong)uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar21 = (long *)(*(long *)(lVar26 + (ulong)uVar25 * 8) + 0x78);
      }
    }
    if (*plVar21 != 0) {
      if (*puVar6 == '\0') {
LAB_001cb080:
        uVar15 = *(undefined8 *)(puVar5 + 0x80);
        cVar2 = *puVar6;
      }
      else {
        puVar13 = (uint *)FUN_03876070(DAT_04c58c60);
        uVar25 = *puVar13;
        if (uVar25 == 0) goto LAB_001cb080;
        lVar26 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar26 >> 3) <= (ulong)uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar26 + (ulong)uVar25 * 8) + 0x78);
        cVar2 = *puVar6;
      }
      plVar21 = (long *)(puVar5 + 0x80);
      if (cVar2 != '\0') {
        plVar21 = (long *)(puVar5 + 0x80);
        puVar13 = (uint *)FUN_03876070(DAT_04c58c60);
        uVar25 = *puVar13;
        if (uVar25 != 0) {
          lVar26 = **(long **)(puVar5 + 0xa0);
          if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar26 >> 3) <= (ulong)uVar25) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar21 = (long *)(*(long *)(lVar26 + (ulong)uVar25 * 8) + 0x78);
        }
      }
      uVar12 = FUN_001886a0(uVar15,0x554,*(undefined8 *)(*plVar21 + 0x48));
      if ((uVar12 & 1) == 0) {
        return;
      }
    }
  }
  puVar5 = PTR_DAT_04bcbb78;
  uVar25 = *(uint *)(param_1[1] + 8);
  if (*puVar6 == '\0') {
LAB_001cb174:
    cVar2 = puVar5[(ulong)uVar25 * 0x2a8 + 0xcc];
  }
  else {
    puVar13 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar13 == 0) goto LAB_001cb174;
    cVar2 = *(char *)(*(long *)(puVar5 + (ulong)uVar25 * 0x2a8 + 0x10) + (ulong)*puVar13 * 0x148 +
                     0xb4);
  }
  if (cVar2 != '\0') {
    param_1[0x28] = DAT_04c589a0;
  }
  uVar4 = *(ushort *)(param_2 + 0x60);
  if (((uVar4 & 0x600) != 0) && (*(int *)((long)param_1 + 0xa4) != 2)) {
    if (*(int *)((long)param_1 + 0xa4) == 1) {
      return;
    }
    if ((char)param_1[0x3d] == '\0') {
      return;
    }
    if (*(int *)((long)param_1 + 0x114) != 2) {
      return;
    }
  }
  if (((uVar4 >> 0xd & 1) == 0) && (*(ushort *)(param_1 + 0x30) < (ushort)*(byte *)(param_2 + 0xa4))
     ) {
    return;
  }
  uVar1 = uVar3 & 0xf;
  if ((uVar4 & 0x600) == 0) {
    if ((uVar4 & 0xf) == 1) {
      if ((uVar4 >> 4 & 1) == 0) goto LAB_001cb30c;
    }
    else if (((uVar4 & 0xf) == 0) && ((uVar4 >> 4 & 1) != 0)) {
LAB_001cb30c:
      sVar27 = *(size_t *)(param_2 + 0x98);
      if (*(char *)(param_2 + 0x40) == '\0') {
        memcpy(param_1 + 0x31,(void *)(param_2 + 0x88),sVar27);
        psVar18 = (size_t *)(param_1 + 0x33);
      }
      else {
        memcpy(param_1 + 0x34,(void *)(param_2 + 0x88),sVar27);
        psVar18 = (size_t *)(param_1 + 0x36);
      }
      *psVar18 = sVar27;
    }
    if ((uVar3 & 0xf) != 0) {
      if ((char)param_1[0x3d] == '\0') {
        if ((*(ushort *)(param_2 + 0x60) & 0xf) == 1) {
          *(char *)(param_1 + 0x3d) = *(char *)(param_2 + 0xa1);
          if ((*(char *)(param_2 + 0x40) != '\0') && (*(short *)(param_2 + 0x80) != 0)) {
            *(short *)(param_1 + 0x2c) = *(short *)(param_2 + 0x80);
          }
          bVar9 = *(byte *)(param_2 + 0x42);
          if ((bVar9 | 8) == 9) {
            if (*puVar6 == '\0') {
LAB_001cbae8:
              puVar17 = puVar5 + (ulong)bVar9 * 0x2a8 + 0x18;
            }
            else {
              puVar13 = (uint *)FUN_03876070(DAT_04c58c60);
              if (*puVar13 == 0) goto LAB_001cbae8;
              puVar17 = (undefined *)
                        (*(long *)(puVar5 + (ulong)(uint)bVar9 * 0x2a8 + 0x10) +
                        (ulong)*puVar13 * 0x148);
            }
            if (puVar17[0x108] != '\0') {
              lVar26 = FUN_001a7560(*(undefined1 *)(param_2 + 0x42));
              local_78 = *(undefined8 *)(lVar26 + 0x118);
              local_70 = *(size_t *)(lVar26 + 0x120);
              uStack_68 = *(undefined8 *)(lVar26 + 0x128);
              local_60 = *(undefined8 *)(lVar26 + 0x130);
              local_80 = (undefined8 *)&DAT_0483bee0;
              uStack_58 = *(undefined8 *)(lVar26 + 0x138);
              FUN_0019c970(local_a8,&local_70);
              lVar26 = FUN_001932e0(local_a8);
              if (lVar26 != 0) {
                (**(code **)(*(long *)param_1[0x65] + 0x40))((long *)param_1[0x65],local_a8);
                (**(code **)(*(long *)param_1[0x65] + 0x38))
                          ((long *)param_1[0x65],local_a8,*(undefined1 *)((long)param_1 + 0x1e9),
                           (char)param_1[0x3d]);
              }
              FUN_0019cd34(local_a8);
            }
          }
        }
        else if (*(char *)(param_2 + 0xa1) != '\0') {
          return;
        }
      }
      else if (*(char *)(param_2 + 0xa1) != (char)param_1[0x3d]) {
        if (uVar1 != 1) {
          return;
        }
        if ((*(ushort *)(param_2 + 0x60) >> 4 & 1) != 0) {
          return;
        }
        uVar15 = 1;
LAB_001cafb4:
        FUN_001ca3a8(param_1,uVar15);
        return;
      }
    }
  }
  if ((*(ushort *)(param_2 + 0x60) >> 6 & 1) == 0) {
LAB_001cb2c0:
    uVar25 = *(uint *)(param_1[1] + 8);
    if (*puVar6 == '\0') goto LAB_001cb358;
LAB_001cb2d0:
    puVar13 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar13 == 0) goto LAB_001cb358;
    if (*(char *)(*(long *)(puVar5 + (ulong)uVar25 * 0x2a8 + 0x10) + (ulong)*puVar13 * 0x148 + 0xb4)
        == '\0') goto LAB_001cb380;
LAB_001cb36c:
    if ((*(ushort *)(param_2 + 0x60) >> 5 & 1) == 0) goto LAB_001cb374;
LAB_001cb398:
    param_1[0x91] = param_1[0x91] + 1;
    uVar12 = 0;
    if (*(long *)(param_2 + 0x138) != 0) {
      uVar12 = (ulong)*(ushort *)(*(long *)(param_2 + 0x138) + 0x18);
    }
    param_1[0x92] = param_1[0x92] + uVar12;
    FUN_001c3db0(*(undefined8 *)(param_1[0x19] + (ulong)*(byte *)(param_2 + 0xa4) * 8),param_2);
    if (uVar1 < 5) goto LAB_001cb3d8;
    goto LAB_001cb8f0;
  }
  if (((*(ushort *)(param_2 + 0x60) & 0xf) != 2) || (*(char *)((long)param_1 + 0x1eb) == '\0')) {
    FUN_001ca8a0(param_1,param_2);
    goto LAB_001cb2c0;
  }
  uVar12 = (ulong)(*(byte *)(param_2 + 0xa4) >> 3) & 0x18;
  *(ulong *)(param_1[0x40] + uVar12) =
       1L << ((ulong)*(byte *)(param_2 + 0xa4) & 0x3f) | *(ulong *)(param_1[0x40] + uVar12);
  lVar26 = param_1[1];
  puVar14 = *(undefined8 **)(lVar26 + 0x158);
  if (*(undefined8 **)(lVar26 + 0x158) == (undefined8 *)0x0) {
    puVar29 = (undefined8 *)(lVar26 + 0x158);
    puVar30 = puVar29;
  }
  else {
    do {
      while( true ) {
        puVar29 = puVar14;
        if (param_1 < (long *)puVar29[4]) break;
        if (param_1 <= (long *)puVar29[4]) goto LAB_001cb2c0;
        puVar14 = (undefined8 *)puVar29[1];
        if ((undefined8 *)puVar29[1] == (undefined8 *)0x0) {
          puVar30 = puVar29 + 1;
          goto LAB_001cb26c;
        }
      }
      puVar14 = (undefined8 *)*puVar29;
      puVar30 = puVar29;
    } while ((undefined8 *)*puVar29 != (undefined8 *)0x0);
  }
LAB_001cb26c:
  puVar14 = (undefined8 *)FUN_00187df4(0x28);
  puVar14[4] = param_1;
  puVar14[2] = puVar29;
  *puVar14 = 0;
  puVar14[1] = 0;
  *puVar30 = puVar14;
  if (**(long **)(lVar26 + 0x150) != 0) {
    *(long *)(lVar26 + 0x150) = **(long **)(lVar26 + 0x150);
    puVar14 = (undefined8 *)*puVar30;
  }
  FUN_03876250(*(undefined8 *)(lVar26 + 0x158),puVar14);
  *(long *)(lVar26 + 0x160) = *(long *)(lVar26 + 0x160) + 1;
  uVar25 = *(uint *)(param_1[1] + 8);
  if (*puVar6 != '\0') goto LAB_001cb2d0;
LAB_001cb358:
  if (puVar5[(ulong)uVar25 * 0x2a8 + 0xcc] != '\0') goto LAB_001cb36c;
LAB_001cb380:
  param_1[0x28] = DAT_04c589a0;
  if ((*(ushort *)(param_2 + 0x60) >> 5 & 1) != 0) goto LAB_001cb398;
LAB_001cb374:
  if (4 < uVar1) goto LAB_001cb8f0;
LAB_001cb3d8:
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((((uVar12 & 1) == 0) || ((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0)) ||
       ((char)param_1[0x21] != '\0')) break;
    lVar26 = FUN_00185a6c(0x238);
    if (lVar26 != 0) {
      FUN_001d8a50(lVar26,param_1,1,0x60,param_1[0x60],0);
    }
    uVar16 = *(undefined1 *)(param_2 + 0x40);
    *(undefined1 *)((long)param_1 + 0x1eb) = uVar16;
    *(undefined1 *)(lVar26 + 0x40) = uVar16;
    *(undefined4 *)((long)param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0xd0);
    FUN_001c45c0(param_1,*(undefined1 *)(param_2 + 0xa3));
    lVar19 = (**(code **)(*(long *)param_1[100] + 0x18))
                       ((long *)param_1[100],*(undefined1 *)((long)param_1 + 0x1eb),
                        *(undefined4 *)((long)param_1 + 0x1ec));
    param_1[0x3e] = lVar19;
    *(undefined4 *)(lVar26 + 0xd0) = *(undefined4 *)((long)param_1 + 0x1ec);
    *(char *)(lVar26 + 0xa3) = (char)param_1[0x30];
    FUN_001ca800(param_1,lVar26);
    local_70 = 0;
    (**(code **)(*(long *)param_1[99] + 0x18))
              ((long *)param_1[99],param_2,1,0,*(undefined1 *)(param_2 + 0x42),param_1[1] + 0xe8,0,
               &local_80);
    sVar27 = local_70;
    memcpy((void *)(lVar26 + 0x88),&local_80,local_70);
    sVar7 = local_70;
    *(size_t *)(lVar26 + 0x98) = sVar27;
    if (*(char *)(param_2 + 0x40) == '\0') {
      memcpy(param_1 + 0x34,&local_80,local_70);
      psVar18 = (size_t *)(param_1 + 0x36);
    }
    else {
      memcpy(param_1 + 0x31,&local_80,local_70);
      psVar18 = (size_t *)(param_1 + 0x33);
    }
    lVar19 = param_1[0x20];
    *psVar18 = sVar7;
    *(undefined8 *)(*(long *)(lVar26 + 0x1f0) + 0x18) =
         *(undefined8 *)(*(long *)(lVar19 + 0x1f0) + 0x18);
    FUN_001c7bf0(auStack_c0,param_1,lVar26);
    FUN_001a64b0(lVar26);
    FUN_001c5a20(param_1[1] + 0x40,param_1[0x20]);
    bVar8 = false;
    *(undefined1 *)(param_1 + 0x21) = 1;
    goto LAB_001cb8f4;
  case 1:
    uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar12 & 1) == 0) {
      if ((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0) goto LAB_001cb734;
    }
    else if ((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0) {
LAB_001cb734:
      (**(code **)(*param_1 + 0x98))(param_1);
    }
    else {
      if (param_1[0x5f] != 0) {
        FUN_00193c08(param_1[0x5f],*(undefined8 *)(param_2 + 0x138));
        param_1[0x5f] = 0;
      }
      local_a8[0] = *(undefined8 *)(param_2 + 0x1d0);
      local_80 = &DAT_0483c278;
      local_78 = CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0x70));
      FUN_001cbcc0(param_1,local_a8,&local_80,0);
      (**(code **)(*param_1 + 0xb0))(param_1,2);
    }
    if (param_1[0x1f] == 0) {
      lVar26 = FUN_00185a6c(0x238);
      FUN_001d8a50(lVar26,param_1,4,0x40,0,0);
      param_1[0x1f] = lVar26;
      *(undefined1 *)(lVar26 + 0x40) = *(undefined1 *)((long)param_1 + 0x1eb);
      iVar10 = (**(code **)(*param_1 + 0x88))(param_1);
      if ((iVar10 == 0) || (iVar10 = (**(code **)(*param_1 + 0x88))(param_1), iVar10 == -1)) {
        lVar26 = param_1[0x1f];
        *(undefined4 *)(*(long *)(lVar26 + 0x1f0) + 8) = 1000;
      }
      else {
        lVar26 = *(long *)(param_1[0x1f] + 0x1f0);
        uVar11 = (**(code **)(*param_1 + 0x88))(param_1);
        *(undefined4 *)(lVar26 + 8) = uVar11;
        lVar26 = param_1[0x1f];
      }
      FUN_001c7680(param_1[1] + 0x40,lVar26);
    }
    break;
  case 2:
    uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar12 & 1) == 0) {
      uVar3 = *(ushort *)(param_2 + 0x60);
      if ((uVar3 >> 4 & 1) != 0) {
        local_a8[0] = *(undefined8 *)(param_2 + 0x1d0);
        uVar16 = *(undefined1 *)(param_2 + 0xa4);
        local_80 = (undefined8 *)(PTR_DAT_04bcc320 + 0x10);
        goto LAB_001cb8b0;
      }
      if ((uVar3 >> 0xd & 1) != 0) {
        FUN_001cc080(param_1,param_2);
        break;
      }
      if ((uVar3 >> 5 & 1) != 0) {
        bVar8 = true;
        goto LAB_001cb8f4;
      }
      if ((uVar3 & 0x600) == 0) {
        uVar4 = *(ushort *)(param_2 + 0x70);
        if (((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x2c) >> 0xf & 1) != 0) goto LAB_001cbc74;
        param_1[0x85] =
             param_1[0x85] + (ulong)(ushort)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x2c));
        if ((uVar3 >> 10 & 1) == 0) {
          *(ushort *)(param_1 + 0x2c) = uVar4 + 1;
          bVar8 = true;
          goto LAB_001cb8f4;
        }
      }
      else {
        if (*(char *)((long)param_1 + 0x1ea) == '\0') {
          *(undefined2 *)(param_1 + 0x2f) = *(undefined2 *)(param_2 + 0x70);
          cVar2 = *(char *)(param_2 + 0xa1);
LAB_001cbc40:
          *(char *)((long)param_1 + 0x1ea) = cVar2;
        }
        else {
          cVar2 = *(char *)(param_2 + 0xa1);
          if (*(char *)((long)param_1 + 0x1ea) != cVar2) goto LAB_001cbc40;
        }
        uVar4 = *(ushort *)(param_2 + 0x70);
        if (((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x2f) >> 0xf & 1) != 0) {
LAB_001cbc74:
          param_1[0x87] = param_1[0x87] + 1;
          bVar8 = DAT_04c58f10 == '\0';
          goto LAB_001cb8f4;
        }
        param_1[0x85] =
             param_1[0x85] + (ulong)(ushort)((uint)uVar4 - (uint)*(ushort *)(param_1 + 0x2f));
      }
      *(ushort *)(param_1 + 0x2f) = uVar4 + 1;
      bVar8 = true;
      goto LAB_001cb8f4;
    }
    break;
  case 3:
    if ((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0) {
      FUN_001c70f0(param_1);
      bVar9 = (**(code **)(*param_1 + 0x60))(param_1);
      (**(code **)(*param_1 + 0xa0))(param_1);
      if (((bVar9 & 1) != 0) && (param_1[0x10] != 0)) {
        FUN_00187aac();
        (**(code **)(*(long *)param_1[0x10] + 0x20))((long *)param_1[0x10],param_1);
      }
      if ((((param_1[1] != 0) && ((*(uint *)(param_1[1] + 8) | 8) == 10)) &&
          (uVar12 = (**(code **)(*param_1 + 0x58))(param_1), (uVar12 & 1) != 0)) &&
         ((*(ushort *)(param_2 + 0x60) >> 6 & 1) == 0)) {
        if ((bVar9 & param_1[0x10] != 0) == 0) {
          if (*(int *)(param_2 + 0xa8) == 2) {
            uVar15 = 0xd;
          }
          else {
            uVar15 = 9;
          }
          FUN_001ca3a8(param_1,uVar15);
          break;
        }
        (**(code **)(*param_1 + 0xb0))(param_1,4);
        FUN_001c4420(param_1);
      }
      FUN_001ca708(param_1[1],param_1);
    }
    else {
      uVar12 = (**(code **)(*param_1 + 0x48))(param_1);
      if ((uVar12 & 1) != 0) {
        (**(code **)(*param_1 + 0xb0))(param_1,0);
      }
      local_a8[0] = *(undefined8 *)(param_2 + 0x1d0);
      uVar16 = 0;
      local_80 = &DAT_0483c278;
LAB_001cb8b0:
      local_78 = CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0x70));
      FUN_001cbcc0(param_1,local_a8,&local_80,uVar16);
    }
    break;
  case 4:
    if (((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0) || (param_1[0x1f] == 0)) {
      bVar8 = false;
      param_1[0x82] = param_1[0x82] + 1;
      *(uint *)((long)param_1 + 0x4a4) = (uint)*(ushort *)(param_2 + 0x70);
      goto LAB_001cb8f4;
    }
    if (*(short *)(param_1[0x1f] + 0x70) == *(short *)(param_2 + 0x70)) {
      FUN_001cc590(param_1,param_2);
    }
  }
LAB_001cb8f0:
  bVar8 = false;
LAB_001cb8f4:
  uVar3 = *(ushort *)(param_2 + 0x60);
  if ((uVar3 >> 5 & 1) != 0) goto LAB_001cb9c8;
  param_1[0x7a] = param_1[0x7a] + 1;
  lVar26 = *(long *)(param_2 + 0x138);
  if (lVar26 == 0) {
    param_1[0x7e] = param_1[0x7e];
    if ((uVar3 >> 9 & 1) != 0) goto LAB_001cb954;
LAB_001cb924:
    if ((uVar3 >> 10 & 1) != 0) {
      param_1[0x7d] = param_1[0x7d] + 1;
      if (lVar26 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulong)*(ushort *)(lVar26 + 0x18);
      }
      plVar21 = param_1 + 0x81;
      goto LAB_001cb984;
    }
  }
  else {
    param_1[0x7e] = param_1[0x7e] + (ulong)*(ushort *)(lVar26 + 0x18);
    if ((uVar3 >> 9 & 1) == 0) goto LAB_001cb924;
LAB_001cb954:
    param_1[0x7c] = param_1[0x7c] + 1;
    if (lVar26 == 0) {
      uVar12 = 0;
      plVar21 = param_1 + 0x80;
    }
    else {
      uVar12 = (ulong)*(ushort *)(lVar26 + 0x18);
      plVar21 = param_1 + 0x80;
    }
LAB_001cb984:
    *plVar21 = *plVar21 + uVar12;
  }
  if (bVar8) {
    param_1[0x7b] = param_1[0x7b] + 1;
    if (lVar26 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulong)*(ushort *)(lVar26 + 0x18);
    }
    param_1[0x7f] = param_1[0x7f] + uVar12;
    FUN_001ca0c0(param_1,param_2);
  }
LAB_001cb9c8:
  uVar12 = (ulong)*(byte *)(param_2 + 0xa4);
  lVar26 = param_1[0x19];
  lVar19 = *(long *)(lVar26 + uVar12 * 8);
  plVar21 = (long *)(lVar19 + 0x10);
  if ((long *)*plVar21 == (long *)0x0) {
    return;
  }
  sVar20 = *(short *)(lVar19 + 0x28);
  plVar22 = plVar21;
  plVar24 = (long *)*plVar21;
  do {
    while (0 < (short)(sVar20 - (short)plVar24[5])) {
      plVar23 = plVar24 + 1;
      plVar24 = (long *)*plVar23;
      if ((long *)*plVar23 == (long *)0x0) goto LAB_001cbab0;
    }
    plVar23 = (long *)*plVar24;
    plVar22 = plVar24;
    plVar24 = plVar23;
  } while (plVar23 != (long *)0x0);
LAB_001cbab0:
  do {
    if (plVar22 == plVar21) {
      return;
    }
    if (0 < (short)((short)plVar22[5] - sVar20)) {
      return;
    }
    lVar28 = plVar22[6];
    *(short *)(lVar19 + 0x28) = sVar20 + 1;
    if (lVar28 == 0) {
      return;
    }
    if ((*(ushort *)(lVar28 + 0x60) & 0xf) == 2) {
      FUN_001ca0c0(param_1,lVar28);
      uVar12 = (ulong)*(byte *)(param_2 + 0xa4);
      lVar26 = param_1[0x19];
    }
    FUN_001c3f90(*(undefined8 *)(lVar26 + uVar12 * 8),lVar28);
    uVar12 = (ulong)*(byte *)(param_2 + 0xa4);
    lVar26 = param_1[0x19];
    lVar19 = *(long *)(lVar26 + uVar12 * 8);
    plVar21 = (long *)(lVar19 + 0x10);
    if ((long *)*plVar21 == (long *)0x0) {
      return;
    }
    sVar20 = *(short *)(lVar19 + 0x28);
    plVar22 = plVar21;
    plVar24 = (long *)*plVar21;
    do {
      while (0 < (short)(sVar20 - (short)plVar24[5])) {
        plVar23 = plVar24 + 1;
        plVar24 = (long *)*plVar23;
        if ((long *)*plVar23 == (long *)0x0) goto LAB_001cbab0;
      }
      plVar23 = (long *)*plVar24;
      plVar22 = plVar24;
      plVar24 = plVar23;
    } while (plVar23 != (long *)0x0);
  } while( true );
}

