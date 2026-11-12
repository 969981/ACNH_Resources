
void FUN_00a7d5ac(long param_1,byte *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar6 = DAT_04da56d0;
  if (DAT_04da56d0 == 0) {
    return;
  }
  switch(*param_3) {
  case 0:
    plVar7 = *(long **)PTR_DAT_04bb27d0;
    lVar5 = *plVar7;
    bVar3 = *(byte *)(lVar5 + 0x473);
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
      if (7 < bVar3) {
        pbVar1 = (byte *)(lVar5 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar3)) {
        *(undefined4 *)(DAT_04da56d0 + 0x3e0) = 0;
        lVar5 = *plVar7;
        bVar3 = *(byte *)(lVar5 + 0x473);
        puVar8 = PTR_DAT_04bc1220;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            puVar8 = (undefined1 *)(lVar5 + 0x473);
          }
        }
        DAT_04da5710 = *puVar8;
        *(undefined1 *)(param_1 + 0x30) = 1;
        local_28 = 0;
        local_22 = 0;
        local_24 = 0xff00;
        if (-1 < *(int *)(param_1 + 8)) {
          FUN_01db1df0(*plVar7 + 0x480,*(int *)(param_1 + 8),&local_28,
                       (undefined1 *)(param_1 + 0x30),1,0);
          lVar6 = DAT_04da56d0;
        }
        *(undefined1 *)(lVar6 + 0x3e4) = 1;
        return;
      }
    }
    bVar3 = *param_2;
    if (*(char *)(DAT_04da56d0 + 0x3e4) != '\x04') {
      local_28 = 0;
      *(undefined1 *)(param_1 + 0x30) = 4;
      local_22 = 0;
      local_24 = CONCAT11(bVar3,4);
      if (*(int *)(param_1 + 8) < 0) {
        return;
      }
      FUN_01db1df0(*plVar7 + 0x480,*(int *)(param_1 + 8),&local_28,param_1 + 0x30,1,0);
      return;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
    local_28 = 0;
    local_22 = 0;
    local_24 = CONCAT11(bVar3,4);
    if (-1 < *(int *)(param_1 + 8)) {
      FUN_01db1df0(*plVar7 + 0x480,*(int *)(param_1 + 8),&local_28,param_1 + 0x30,1,0);
      lVar6 = DAT_04da56d0;
    }
    goto LAB_00a7d6cc;
  case 1:
    lVar5 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar5 + 0x473);
    if ((long)(char)bVar3 == 0xffffffffffffffff) {
      return;
    }
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) == 0) {
      return;
    }
    if (*(byte *)(lVar5 + 0x472) == bVar3) {
      return;
    }
LAB_00a7d6cc:
    uVar4 = 1;
LAB_00a7d6fc:
    *(undefined1 *)(lVar6 + 0x3e4) = uVar4;
    DAT_04da5710 = *param_2;
    break;
  case 2:
    if (*param_2 < 8) {
      *(uint *)(DAT_04da56d0 + 0x3e0) =
           *(uint *)(DAT_04da56d0 + 0x3e0) | 1 << (ulong)(*param_2 & 0x1f);
    }
    break;
  case 3:
    uVar4 = 3;
    goto LAB_00a7d6fc;
  case 4:
    *(byte *)(DAT_04da56d0 + 0x3e5) = *(byte *)(DAT_04da56d0 + 0x3e5) | 1;
    DAT_04da5710 = 0xff;
  }
  return;
}

