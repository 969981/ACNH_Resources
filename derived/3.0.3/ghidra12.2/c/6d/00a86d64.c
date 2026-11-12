
int FUN_00a86d64(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong local_30;
  long local_28;
  
  local_30 = *param_2;
  if ((local_30 & 0xffff) != 0) {
    local_28 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_30);
    local_28 = local_28 + -0xe10;
    local_30 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_28);
  }
  iVar6 = FUN_00a8d8a8(param_1,param_2);
  local_28 = CONCAT44(local_28._4_4_,iVar6);
  if ((iVar6 == 5) && (iVar6 = FUN_00a8d8a8(param_1,&local_30), iVar6 != 5)) {
    uVar8 = (ulong)(short)DAT_04c487d4;
    if (uVar8 != 0xffffffffffffffff) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)(short)DAT_04c487d4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x19 & 1) != 0) {
        return 0x1e;
      }
      puVar2 = PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8;
      if (0xff < DAT_04c487d4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_00a86dd8;
    }
    uVar1 = *(int *)(param_1 + 0x65208) +
            ((uint)*(byte *)((long)param_2 + 2) * 0x1000 + (uint)(ushort)*param_2 * 0x40000 +
             *(char *)((long)param_2 + 3) * 0x40 + (int)*(char *)((long)param_2 + 4)) * 0x1000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar7 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
    uVar1 = uVar1 ^ uVar1 * 0x800;
    uVar1 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
    uVar7 = uVar7 ^ uVar7 * 0x800;
    uVar4 = uVar4 ^ uVar4 * 0x800;
    uVar1 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
    uVar1 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
    if ((uVar1 & 1) == 0) {
      if (DAT_04c487d4 == 0xffff) {
        uVar7 = 0;
      }
      else {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
        if (0xff < DAT_04c487d4) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar7 = *puVar3 >> 0x19 & 1;
      }
      if ((uVar7 == 0) && (*(char *)(DAT_04da7238 + 0x65398) != '\0')) goto LAB_00a86dd8;
    }
    uVar5 = uVar5 ^ uVar5 * 0x800;
    iVar6 = (int)((ulong)(uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1) * 0xf >> 0x20) + 0xf;
  }
  else {
LAB_00a86dd8:
    iVar6 = -1;
  }
  return iVar6;
}

