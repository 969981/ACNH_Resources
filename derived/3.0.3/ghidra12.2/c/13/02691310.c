
void FUN_02691310(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  void *__s;
  ulong local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  ulong local_1c8;
  int local_1c0 [6];
  undefined1 local_1a8;
  int local_1a4 [72];
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_7a;
  undefined8 local_74;
  undefined2 local_6c;
  undefined1 local_6a;
  
  local_1c0[0] = 0;
  local_1a8 = 2;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_1c0[3] = 0;
  local_1c0[4] = 0;
  local_1c0[5] = 0;
  memset(local_1a4,0,0x120);
  local_84 = 999;
  local_80 = 0x103e7;
  local_82 = 1;
  local_7a = 0;
  local_7c = 0;
  local_74 = 0xfffe;
  FUN_0277d4ac();
  local_1d4 = 0;
  local_6c = 0xffff;
  uVar11 = 0;
  local_1e0 = 0;
  iVar10 = 0;
  local_6a = 0;
  lVar1 = param_1 + 0x2f84;
  do {
    __s = (void *)(lVar1 + (long)iVar10 * 0x158);
    if ((*(int *)((long)__s + 0x1c) == *(int *)(param_2 + 0x1c)) &&
       ((*(long *)(param_2 + 0x20) == *(long *)((long)__s + 0x20) &&
        *(long *)(param_2 + 0x28) == *(long *)((long)__s + 0x28)) &&
        *(int *)(param_2 + 0x30) == *(int *)((long)__s + 0x30))) {
      iVar2 = (int)local_1e0;
      iVar8 = (int)uVar11;
      uVar5 = nn::time::IsValidDate(local_1d4,iVar8,iVar2);
      if ((uVar5 & 1) == 0) {
LAB_026915b0:
        FUN_027a8874(local_1c0,__s);
        uVar5 = FUN_0272eca4(lVar1 + (long)iVar10 * 0x158 + 0x138,1);
        uVar9 = uVar5 >> 0x18 & 0xff;
        uVar3 = (uint)uVar5;
        uVar5 = nn::time::IsValidDate(uVar3 & 0xffff,uVar3 >> 0x10 & 0xff,(int)uVar9);
        if ((uVar5 & 1) != 0) {
          uVar11 = (ulong)(uVar3 >> 0x10 & 0xff);
          local_1d4 = uVar3 & 0xffff;
          local_1e0 = uVar9;
        }
      }
      else {
        uVar5 = nn::time::IsValidDate(local_1d4,iVar8,iVar2);
        if ((uVar5 & 1) == 0) {
          local_1c8 = 0x10107d0;
        }
        else {
          uVar3 = nn::time::IsValidDate(local_1d4,iVar8,iVar2);
          uVar4 = nn::time::IsValidDate(local_1d4,iVar8,iVar2);
          uVar5 = nn::time::IsValidDate(local_1d4,iVar8,iVar2);
          local_1c8 = local_1e0 << 0x18;
          if ((uVar5 & 1) == 0) {
            local_1c8 = 0x1000000;
          }
          uVar5 = uVar11 << 0x10;
          if ((uVar4 & 1) == 0) {
            uVar5 = 0x10000;
          }
          uVar9 = (ulong)local_1d4 | 0x500000000;
          if ((uVar3 & 1) == 0) {
            uVar9 = 0x5000007d0;
          }
          local_1c8 = uVar5 | uVar9 | local_1c8;
        }
        local_1d0 = FUN_0272eca4(lVar1 + (long)iVar10 * 0x158 + 0x138,1);
        lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1c8);
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1d0);
        if (lVar6 <= lVar7) {
          nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1d0);
          goto LAB_026915b0;
        }
      }
      memset(__s,0,0x158);
      *(undefined8 *)((long)__s + 4) = 0;
      *(undefined1 *)((long)__s + 0x18) = 2;
      *(undefined8 *)((long)__s + 0xc) = 0;
      lVar6 = lVar1 + (long)iVar10 * 0x158;
      *(undefined4 *)((long)__s + 0x14) = 0;
      memset((int *)((long)__s + 0x1c),0,0x120);
      *(undefined1 *)(lVar6 + 0x144) = 0;
      *(undefined2 *)(lVar6 + 0x13c) = 999;
      *(undefined1 *)(lVar6 + 0x13e) = 1;
      *(undefined4 *)(lVar6 + 0x140) = 0x103e7;
      *(undefined4 *)(lVar6 + 0x146) = 0;
      *(undefined8 *)(lVar6 + 0x14c) = 0xfffe;
      FUN_0277d4ac();
      *(undefined2 *)(lVar6 + 0x154) = 0xffff;
      *(undefined1 *)(lVar6 + 0x156) = 0;
    }
    iVar10 = iVar10 + 1;
    if (iVar10 == 0xa0) {
      if ((local_1a4[0] != 0) && (local_1c0[0] != 0)) {
        uVar3 = FUN_026b35a0();
        lVar1 = param_1 + 4 + (ulong)uVar3 * 0x5f0;
        if (7 < uVar3) {
          lVar1 = param_1 + 4;
        }
        FUN_027b6388(lVar1,local_1c0);
      }
      return;
    }
  } while( true );
}

