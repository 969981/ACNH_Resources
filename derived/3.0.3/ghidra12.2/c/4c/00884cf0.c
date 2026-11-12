
bool FUN_00884cf0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  short *psVar8;
  int *piVar9;
  char cVar10;
  long local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_48;
  
  psVar8 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*psVar8 == 0) {
    local_48 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_48 >> 0x20) < '\x05') {
      local_78 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_78 = local_78 + -0x15180;
      local_48 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    }
    psVar8 = (short *)&local_48;
    uVar5 = local_48 >> 0x30;
    local_48._0_6_ = CONCAT24(5,(undefined4)local_48);
    local_48 = CONCAT26((short)uVar5,(undefined6)local_48) & 0xff00ffffffffffff;
  }
  local_48 = *(ulong *)psVar8;
  uVar5 = FUN_00873540(param_1,&local_48,1,0);
  if ((uVar5 & 1) != 0) {
    FUN_00873ad0(&local_78,param_1,&local_48,1);
    (**(code **)(local_78 + 0x18))(&local_78);
    local_64 = FUN_006bd550(local_70,0);
    puVar6 = (uint *)FUN_0088c0d0(param_1 + 8,&local_64);
    __s = PTR_DAT_04bb3250;
    puVar4 = PTR_DAT_04bb3248;
    if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
      cVar10 = *PTR_DAT_04bb3248;
      while( true ) {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *puVar4 = 1;
          memset(__s,0xff,0x288);
        }
        else {
          uVar3 = *(uint *)(__s + 0x270);
          if (-1 < (int)uVar3) {
            if ((char *)((ulong)uVar3 + (long)puVar6) == (char *)0x0) {
              return false;
            }
            return *(char *)((ulong)uVar3 + (long)puVar6) != '\0';
          }
          if (uVar3 != 0xffffffff) {
            return false;
          }
        }
        puVar7 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return false;
        }
        if (puVar6 == puVar7) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar7)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar7);
        if (lVar2 == 0) {
          return false;
        }
        uVar5 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar7));
        *(undefined4 *)(__s + 0x270) = 0xfffffffe;
        if (uVar5 == 0) {
          return false;
        }
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != 0x46df4305) {
          piVar9 = piVar9 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return false;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(__s + 0x270) = iVar1;
        if (*puVar6 == 0) {
          return false;
        }
      }
      return false;
    }
  }
  return false;
}

