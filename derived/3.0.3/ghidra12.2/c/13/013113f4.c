
/* WARNING: Removing unreachable block (ram,0x013115c0) */
/* WARNING: Removing unreachable block (ram,0x01311508) */
/* WARNING: Removing unreachable block (ram,0x01311594) */
/* WARNING: Removing unreachable block (ram,0x013115ec) */

bool FUN_013113f4(long param_1,undefined2 *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  bool bVar6;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  bVar6 = false;
  if ((param_2 != (undefined2 *)0x0) && (param_3 != (undefined4 *)0x0)) {
    local_58 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = PTR_DAT_04bbc230 + 0x10;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_012f1414(&local_d8,param_1 + 8);
    FUN_012f1414(&local_d8,param_1 + 0x90);
    FUN_012f1414(&local_d8,param_1 + 0x118);
    FUN_012f1414(&local_d8,param_1 + 0x1a0);
    uVar3 = FUN_00b3a3f8(&uStack_d0);
    bVar6 = 0 < (int)uVar3;
    if (0 < (int)uVar3) {
      uVar1 = *param_4 ^ *param_4 << 0xb;
      uVar2 = param_4[3];
      *param_4 = param_4[1];
      param_4[1] = param_4[2];
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      param_4[2] = uVar2;
      param_4[3] = uVar1;
      uVar3 = FUN_00b3aac0(&uStack_d0,(int)((ulong)uVar1 * (ulong)uVar3 >> 0x20) + 1);
      if ((uVar3 & 0xffff) < 0x400) {
        uVar5 = (ulong)(uVar3 >> 5 & 0x7ff);
        uVar4 = 1;
        uVar1 = 1 << (ulong)(uVar3 & 0x1f);
        if ((*(uint *)(param_1 + 8 + uVar5 * 4 + 8) & uVar1) == 0) {
          if ((((*(uint *)(param_1 + uVar5 * 4 + 0x98) & uVar1) == 0) &&
              (uVar4 = 2, (*(uint *)(param_1 + uVar5 * 4 + 0x120) & uVar1) == 0)) &&
             (uVar4 = 0, (*(uint *)(param_1 + uVar5 * 4 + 0x1a8) & uVar1) != 0)) {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
      *param_2 = (short)uVar3;
      *param_3 = uVar4;
    }
  }
  return bVar6;
}

