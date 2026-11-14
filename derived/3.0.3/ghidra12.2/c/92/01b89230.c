
void FUN_01b89230(long param_1,long *param_2,long *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 *local_c0;
  ulong local_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  puVar3 = PTR_DAT_04bb4788;
  lVar10 = *(long *)PTR_DAT_04bb4788;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar18 = param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0071b954(&local_c0,"%s-%s",lVar18,param_3[1]);
  (**(code **)(local_c0 + 0x18))(&local_c0);
  uVar5 = FUN_006bd550(local_b8,0);
  local_58 = CONCAT44(local_58._4_4_,uVar5);
  lVar18 = FUN_01b8c450(lVar10 + 0x600,&local_58);
  if (lVar18 == 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    uVar5 = FUN_006bd550(param_2[1],0);
    local_c0 = (undefined1 *)CONCAT44(local_c0._4_4_,uVar5);
    lVar18 = FUN_01b8c450(lVar10 + 0x600,&local_c0);
    if (lVar18 == 0) {
      return;
    }
  }
  local_c0 = &LAB_01b89550;
  local_b8 = 0;
  local_70 = (undefined1 *)0x0;
  uStack_68 = 0;
  local_80 = (undefined1 *)0x0;
  uStack_78 = 0;
  local_b0 = FUN_01b89650;
  uStack_a8 = 0;
  local_a0 = &LAB_01b89750;
  uStack_98 = 0;
  local_60 = *param_4;
  uVar17 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_90 = &LAB_01b89850;
  uStack_88 = 0;
  if ((char)(local_60 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
    local_58 = lVar10 + -0x15180;
    local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
  }
  uVar7 = local_60 >> 0x10;
  uVar2 = local_60 >> 0x30;
  uVar8 = local_60 >> 0x18;
  local_60._0_6_ = CONCAT24(5,(undefined4)local_60);
  local_60 = CONCAT26((short)uVar2,(undefined6)local_60) & 0xff00ffffffffffff;
  cVar4 = FUN_00a8ae20(uVar17,uVar7,uVar8);
  local_58 = CONCAT44(local_58._4_4_,(int)cVar4);
  puVar11 = &LAB_01b89a50;
  puVar14 = &LAB_01b89950;
  switch(cVar4) {
  case '\0':
    break;
  case '\x01':
    puVar11 = &LAB_01b89c50;
    puVar14 = &LAB_01b89b50;
    break;
  case '\x02':
    puVar11 = &LAB_01b89e50;
    puVar14 = &LAB_01b89d50;
    break;
  case '\x03':
    puVar11 = &LAB_01b8a050;
    puVar14 = &LAB_01b89f50;
    break;
  default:
    goto switchD_01b893dc_default;
  }
  local_80 = puVar14;
  uStack_78 = 0;
  local_70 = puVar11;
  uStack_68 = 0;
switchD_01b893dc_default:
  lVar10 = *(long *)puVar3;
  uVar16 = 0;
  do {
    lVar13 = (long)((ulong)uVar16 << 0x20) >> 0x1c;
    pcVar12 = *(code **)((long)&local_c0 + lVar13);
    uVar2 = *(ulong *)((long)&local_b8 + lVar13);
    uVar7 = uVar2 & 1;
    if (uVar7 != 0 || pcVar12 != (code *)0x0) {
      if (uVar7 != 0) {
        pcVar12 = *(code **)(pcVar12 + *(long *)(lVar18 + ((long)uVar2 >> 1)));
      }
      uVar6 = (*pcVar12)();
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (((((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
            (lVar13 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar13 != 0)) &&
           (*(long *)(lVar10 + 0xb0) != 0)) &&
          ((puVar15 = *(uint **)(*(long *)(lVar10 + 0xb0) + 8), puVar15 != (uint *)0x0 &&
           (*puVar15 != 0)))) &&
         ((uVar6 = puVar15[1], uVar6 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar15 + lVar1 + (ulong)(ushort)puVar15[2] * 8;
        if (lVar1 != 0) {
          uVar9 = 0;
          if ((ulong)uVar6 != 0) {
            uVar9 = (uint)((ulong)(lVar13 - lVar1) / (ulong)uVar6);
          }
          if (*puVar15 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((0 < *(int *)(lVar10 + 0x1c0)) && (uVar9 < *(uint *)(lVar10 + 0x1c8))) {
            uVar9 = (uint)*(short *)(*(long *)(lVar10 + 0x1d0) + (long)(int)uVar9 * 2);
          }
          if (uVar9 < 0x80) {
            *(byte *)(param_1 + (ulong)(uVar9 >> 3)) =
                 *(byte *)(param_1 + (ulong)(uVar9 >> 3)) | (byte)(1 << (ulong)(uVar9 & 7));
          }
        }
      }
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 6);
  return;
}

