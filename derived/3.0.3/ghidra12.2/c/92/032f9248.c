
ulong FUN_032f9248(undefined8 param_1,char *param_2,ushort param_3,ulong param_4,undefined2 *param_5
                  ,undefined4 param_6)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
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
  undefined8 uStack_50;
  undefined1 auStack_42 [2];
  
  if (param_2 == (char *)0x0) {
    return 0x8001;
  }
  if (param_5 == (undefined2 *)0x0) {
    return 0x800d;
  }
  bVar2 = param_2[2];
  if ((bVar2 == 0xff) || (param_2[0x70380] != bVar2)) {
    return 0x801b;
  }
  if (param_2[0x86bcc] == '\0') {
    return 0;
  }
  puVar1 = (ushort *)(param_2 + 0x83e00);
  cVar3 = *param_2;
  uVar4 = (uint)param_4;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (cVar3 == '\x02') {
    if (param_3 != 0) {
LAB_032f935c:
      uVar6 = 0x800c;
      goto LAB_032f947c;
    }
    if ((uVar4 & 0xffff) < (uint)*puVar1) goto LAB_032f93fc;
  }
  else if (cVar3 == '\x01') {
    if ((param_4 & 0xffff) != 0) {
      if (param_3 != 0) goto LAB_032f935c;
      if ((uint)*puVar1 <= (uVar4 & 0xffff)) {
        uVar4 = (uVar4 - *puVar1) + 1;
        uVar5 = FUN_032f9490(param_2,uVar4,auStack_42);
        if ((uVar5 >> 0xf & 1) != 0) {
          return (ulong)(uint)(int)(short)uVar5;
        }
        if ((uVar4 & 0xffff) != (uVar5 & 0xffff)) goto LAB_032f9478;
      }
      goto LAB_032f93fc;
    }
    if ((int)(uint)param_3 <
        (int)((uint)*(ushort *)(param_2 + 0x85b40) - (uint)(byte)param_2[0x79e9d])) {
      uVar4 = FUN_00100810(&local_b8,param_2 + 8,
                           param_2 + ((ulong)(byte)param_2[0x79e9d] + (ulong)param_3) * 0x88 +
                                     0x83e08,0x70);
      if ((uVar4 >> 0xf & 1) != 0) {
        return 0x806a;
      }
      if (*puVar1 == 0) {
        *puVar1 = 1;
      }
      goto LAB_032f9418;
    }
  }
  else if (cVar3 == '\0') {
    if (param_3 != 0) goto LAB_032f935c;
    if ((uint)*puVar1 <= (uVar4 & 0xffff)) {
      if (bVar2 - 9 < 2) {
        return 0;
      }
      uVar4 = (uVar4 - *puVar1) + 1;
      uVar5 = FUN_032f2480(param_1,param_2,uVar4);
      if ((uVar5 >> 0xf & 1) != 0) {
        return (ulong)(uint)(int)(short)uVar5;
      }
      if ((uVar4 & 0xffff) != (uVar5 & 0xffff)) goto LAB_032f9478;
    }
LAB_032f93fc:
    uVar4 = FUN_00100810(&local_b8,param_2 + 8,param_2 + (param_4 & 0xffff) * 0x88 + 0x79ea0,0x70);
    if ((uVar4 >> 0xf & 1) != 0) {
      return 0x806a;
    }
LAB_032f9418:
    uVar6 = FUN_032f95c0(param_2,&local_b8,param_5,param_6);
    return uVar6;
  }
LAB_032f9478:
  uVar6 = 0;
LAB_032f947c:
  *param_5 = 0;
  return uVar6;
}

