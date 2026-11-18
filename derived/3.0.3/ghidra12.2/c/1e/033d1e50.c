
void FUN_033d1e50(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined5 uStack_44;
  undefined3 local_3f;
  undefined5 uStack_3c;
  byte local_34 [4];
  
  FUN_033d40fc(&local_110);
  if (DAT_0548e140 < 8) {
    local_34[0] = DAT_0548e140;
LAB_033d1f6c:
    uVar3 = FUN_02582d8c(local_34,1);
    puVar6 = PTR_DAT_04bb4fb8;
    if (((uVar3 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
        ((uVar3 = FUN_02582d8c(local_34,1), uVar3 < 8 &&
         (*(char *)(*(long *)puVar6 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) {
      puVar6 = (undefined *)(*(long *)puVar6 + (ulong)uVar3 * 0x13f0 + 0x6b0);
      goto LAB_033d2004;
    }
  }
  else {
    if (DAT_04cd19d8 == 0) {
LAB_033d1ee4:
      if (DAT_0537d558 != (long *)0x0) {
        lVar5 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        local_34[0] = *pbVar4;
        if (local_34[0] < 8) goto LAB_033d1f6c;
      }
      pbVar4 = &DAT_0548e168;
    }
    else {
      pbVar4 = &DAT_0548e140;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((7 < *pbVar4) &&
         (((*(int *)(DAT_04cd19d8 + 0x15c) == 0 || (DAT_054f5738 == 0)) ||
          (pbVar4 = (byte *)(DAT_054f5738 + 0x11a5), 7 < *pbVar4)))) goto LAB_033d1ee4;
    }
    local_34[0] = *pbVar4;
    if (local_34[0] < 8) goto LAB_033d1f6c;
    local_34[0] = 0xff;
  }
  puVar6 = &DAT_05745710;
  FUN_033d2620(&DAT_05745710);
LAB_033d2004:
  *(undefined4 *)(puVar6 + 0x894) = local_e0;
  *(undefined8 *)(puVar6 + 0x884) = local_f0;
  *(undefined8 *)(puVar6 + 0x88c) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x864) = local_110;
  *(undefined8 *)(puVar6 + 0x86c) = uStack_108;
  *(undefined8 *)(puVar6 + 0x874) = local_100;
  *(undefined8 *)(puVar6 + 0x87c) = uStack_f8;
  *(undefined2 *)(puVar6 + 0x898) = local_dc;
  puVar6[0x89a] = local_da;
  puVar6[0x89b] = local_d9;
  *(undefined4 *)(puVar6 + 0x89c) = local_d8;
  *(undefined8 *)(puVar6 + 0x8a0) = local_d4;
  *(undefined8 *)(puVar6 + 0x8a8) = local_cc;
  *(undefined4 *)(puVar6 + 0x8b0) = local_c4;
  *(undefined4 *)(puVar6 + 0x8b4) = uStack_c0;
  *(undefined2 *)(puVar6 + 0x8b8) = local_bc;
  puVar6[0x8ba] = local_ba;
  puVar6[0x8bb] = local_b9;
  *(undefined4 *)(puVar6 + 0x8c0) = uStack_b4;
  *(undefined4 *)(puVar6 + 0x8bc) = local_b8;
  *(undefined8 *)(puVar6 + 0x8c4) = local_b0;
  *(undefined8 *)(puVar6 + 0x8cc) = uStack_a8;
  *(undefined8 *)(puVar6 + 0x8d4) = local_a0;
  *(undefined8 *)(puVar6 + 0x8dc) = uStack_98;
  *(undefined4 *)(puVar6 + 0x8e4) = local_90;
  *(undefined2 *)(puVar6 + 0x8e8) = local_8c;
  puVar6[0x8ea] = local_8a;
  puVar6[0x8eb] = local_89;
  *(undefined4 *)(puVar6 + 0x8ec) = local_88;
  *(undefined2 *)(puVar6 + 0x8f0) = local_84;
  puVar6[0x8f2] = local_82;
  puVar6[0x8f3] = local_81;
  *(undefined4 *)(puVar6 + 0x8f4) = local_80;
  *(undefined2 *)(puVar6 + 0x8f8) = local_7c;
  puVar6[0x8fa] = local_7a;
  puVar6[0x8fb] = local_79;
  *(undefined4 *)(puVar6 + 0x8fc) = local_78;
  *(undefined8 *)(puVar6 + 0x918) = local_5c;
  *(undefined8 *)(puVar6 + 0x910) = local_64;
  *(undefined8 *)(puVar6 + 0x908) = local_6c;
  *(undefined8 *)(puVar6 + 0x900) = local_74;
  *(ulong *)(puVar6 + 0x935) = CONCAT53(uStack_3c,local_3f);
  *(ulong *)(puVar6 + 0x930) = CONCAT35(local_3f,uStack_44);
  *(undefined8 *)(puVar6 + 0x928) = local_4c;
  *(undefined8 *)(puVar6 + 0x920) = local_54;
  return;
}

