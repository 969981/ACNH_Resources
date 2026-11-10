
int FUN_00112bf0(long param_1,ushort *param_2,byte param_3,ushort *param_4,byte param_5,char param_6
                ,ushort *param_7)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  int iVar10;
  ushort uVar11;
  ushort *puVar12;
  ushort uVar13;
  ushort local_70 [4];
  undefined2 local_68;
  
  cVar3 = *(char *)(param_1 + 0x46);
  cVar9 = *(char *)(param_1 + 0x47);
  bVar4 = *(byte *)(param_1 + 0x42);
  bVar5 = *(byte *)(param_1 + 0x43);
  bVar6 = *(byte *)(param_1 + 0x44);
  uVar1 = (ushort)param_3;
  bVar7 = *(byte *)(param_1 + 0x45);
  *param_7 = 0;
  if (cVar3 == '\0') {
    if (param_3 != 0) {
      uVar2 = (ushort)param_5;
      if (param_6 == '\0') {
        uVar11 = 0;
        uVar13 = 0;
        do {
          if (uVar2 <= uVar13) break;
          local_68 = *param_4;
          if (*param_2 != local_68) goto LAB_00112f2c;
          uVar11 = uVar11 + 1;
          param_2 = param_2 + 1;
          uVar13 = uVar13 + 2;
          *param_7 = uVar11;
        } while (uVar11 < uVar1);
        goto joined_r0x00112f50;
      }
      if (param_5 != 0) {
        uVar13 = 0;
        do {
          local_70[0] = *param_4;
          local_70[1] = 0;
          FUN_00114550(local_70,&local_68,1);
          if (*param_2 != local_68) {
LAB_00112f2c:
            iVar10 = (uint)(byte)*param_2 - (local_68 & 0xff);
            if (iVar10 == 0) {
              return (uint)*(byte *)((long)param_2 + 1) - (uint)local_68._1_1_;
            }
            return iVar10;
          }
          uVar8 = *param_7;
          uVar13 = uVar13 + 2;
          uVar11 = uVar8 + 1;
          *param_7 = uVar11;
          if ((uVar13 < uVar2) && ((ushort)(uVar8 + 1) < uVar1)) {
            uVar11 = *param_7;
          }
        } while ((uVar11 < uVar1) && (param_2 = param_2 + 1, uVar13 < uVar2));
        goto joined_r0x00112f50;
      }
    }
  }
  else if (param_3 != 0) {
    param_1 = param_1 + ((ulong)bVar4 << 0x18 | (ulong)bVar5 << 0x10 | (ulong)bVar6 << 8 |
                        (ulong)bVar7);
    uVar2 = (ushort)param_5;
    if (cVar9 == '\x02') {
      if (param_5 != 0) {
        uVar13 = 0;
        do {
          local_70[0] = *(ushort *)
                         (param_1 + ((ulong)*(byte *)((long)param_4 + (ulong)uVar13) - 1) * 2);
          local_70[1] = 0;
          if (param_6 == '\0') {
            puVar12 = local_70;
            if (*param_2 != local_70[0]) {
LAB_00112f7c:
              iVar10 = (uint)(byte)*param_2 - (uint)(byte)*puVar12;
              if (iVar10 == 0) {
                iVar10 = (uint)*(byte *)((long)param_2 + 1) - (uint)*(byte *)((long)puVar12 + 1);
              }
              return iVar10;
            }
          }
          else {
            puVar12 = &local_68;
            FUN_00114550(local_70,&local_68,1);
            if (*param_2 != local_68) goto LAB_00112f7c;
          }
          uVar11 = *param_7 + 1;
          *param_7 = *param_7 + 1;
          if (uVar11 < uVar1) {
            uVar11 = *param_7;
          }
          uVar13 = uVar13 + 1;
        } while ((uVar11 < uVar1) && (param_2 = param_2 + 1, uVar13 < uVar2));
        goto joined_r0x00112f50;
      }
    }
    else {
      if (param_6 == '\0') {
        uVar13 = 0;
        do {
          uVar11 = uVar13;
          if (uVar2 <= uVar13) break;
          bVar4 = *(byte *)(param_1 +
                           ((ulong)*(byte *)((long)param_4 + (ulong)uVar13) - 1) * (long)cVar9);
          local_70[0] = (ushort)bVar4;
          local_70[1] = 0;
          if (*param_2 != (ushort)bVar4) {
            puVar12 = local_70;
            goto LAB_00112f7c;
          }
          uVar13 = uVar13 + 1;
          param_2 = param_2 + 1;
          *param_7 = uVar13;
          uVar11 = uVar13;
        } while (uVar13 < uVar1);
        goto joined_r0x00112f50;
      }
      if (param_5 != 0) {
        uVar13 = 0;
        do {
          local_70[0] = (ushort)*(byte *)(param_1 +
                                         ((ulong)*(byte *)((long)param_4 + (ulong)uVar13) - 1) *
                                         (long)cVar9);
          local_70[1] = 0;
          puVar12 = &local_68;
          FUN_00114550(local_70,&local_68,1);
          if (*param_2 != local_68) goto LAB_00112f7c;
          uVar11 = *param_7 + 1;
          *param_7 = *param_7 + 1;
          if (uVar11 < uVar1) {
            uVar11 = *param_7;
          }
          uVar13 = uVar13 + 1;
        } while ((uVar11 < uVar1) && (param_2 = param_2 + 1, uVar13 < uVar2));
        goto joined_r0x00112f50;
      }
    }
  }
  uVar13 = 0;
  uVar11 = 0;
joined_r0x00112f50:
  if (uVar1 != uVar11) {
    return 1;
  }
  if (param_5 == uVar13) {
    return 0;
  }
  *param_7 = param_3 + 1;
  return 0;
}

