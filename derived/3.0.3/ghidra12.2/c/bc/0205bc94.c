
void FUN_0205bc94(long param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined1 uStack_44;
  byte bStack_43;
  byte bStack_42;
  uint uStack_41;
  undefined2 local_3d;
  
  uVar3 = *(ushort *)(param_2 + 2);
  uVar11 = 0x23;
  local_4c = 0x23;
  local_4a = 8;
  if ((byte)(uVar3 >> 8) < 0x23) {
    FUN_020fd218(&local_4c,uVar3 >> 8,uVar3 & 0xff);
    uVar11 = (uint)(byte)local_4c;
  }
  local_60 = 8;
  local_55 = 0;
  puStack_68 = local_5c;
  local_5c[0] = 0;
  local_70 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_70,"-----");
  if (uVar11 < 0x23) {
    FUN_038d1270(&local_70,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)uVar11 * 8 + 0xb0),
                 local_4c._1_1_);
  }
  uVar8 = 2;
  uVar7 = 3;
  switch(*param_2) {
  case 2:
    FUN_0205bf10(param_1,param_2);
    return;
  default:
    goto switchD_0205bd70_caseD_3;
  case 4:
    puVar1 = (undefined8 *)(param_1 + 0x90) + (ulong)(byte)param_2[8] * 7;
    if (9 < (byte)param_2[8]) {
      puVar1 = (undefined8 *)(param_1 + 0x90);
    }
    if ((*(byte *)(param_1 + 0x2cc) >> 1 & 1) != 0) {
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar10 + 0x473);
      pcVar9 = PTR_DAT_04bc1220;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar2 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pcVar9 = (char *)(lVar10 + 0x473);
        }
      }
      if (*(char *)((long)puVar1 + 7) == *pcVar9) {
        *(undefined4 *)(param_1 + 0x2c8) = 0;
        *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xfd;
      }
    }
    puVar6 = PTR_DAT_04bb5018;
    local_48 = 0;
    *puVar1 = 0xff08002300000000;
    puVar5 = PTR_DAT_04bb37e0;
    *(undefined2 *)(puVar1 + 6) = 0xffff;
    bVar4 = *puVar6;
    local_3d = 0;
    bStack_43 = bVar4 << 2 | 3;
    uVar7 = *(undefined4 *)puVar5;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar5 + 4);
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined4 *)((long)puVar1 + 0xc) = uVar7;
    bStack_42 = bVar4 >> 6 | bVar4 << 2;
    uStack_44 = 0xff;
    uStack_41 = (uint)(byte)(bVar4 >> 6 | 4);
    FUN_020e9c5c(&local_48,(long)puVar1 + 0x32);
    return;
  case 6:
    uVar7 = 4;
    break;
  case 7:
    break;
  case 8:
    uVar7 = 2;
    break;
  case 9:
    uVar7 = 5;
    break;
  case 0xb:
    uVar8 = 5;
  case 10:
    *(undefined4 *)(param_1 + 0x2c8) = uVar8;
    uVar11 = 1;
    goto LAB_0205bee8;
  }
  *(undefined4 *)(param_1 + 0x2c4) = uVar7;
  uVar11 = 0;
LAB_0205bee8:
  *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & ((byte)(1 << (ulong)uVar11) ^ 0xff);
switchD_0205bd70_caseD_3:
  return;
}

