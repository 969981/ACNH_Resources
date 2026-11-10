
void FUN_001dffa0(long param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar5 != 0) {
      puVar10 = (undefined *)(DAT_04c5e5e8 + (ulong)*puVar5 * 0x148);
      uVar6 = *(uint *)(puVar10 + 0x50);
      goto joined_r0x001e0098;
    }
  }
  puVar10 = &DAT_04c5e5f0;
  uVar6 = DAT_04c5e640;
joined_r0x001e0098:
  if (param_2 < uVar6) {
    *param_3 = 0;
    return;
  }
  plVar8 = (long *)(puVar10 + 8);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar7 = (ulong)*(uint *)(puVar10 + 0x50);
  uVar6 = 0;
  if (*(uint *)(puVar10 + 0x50) != 0) {
    uVar11 = 0;
    puVar9 = (undefined4 *)(param_1 + 0xc);
    do {
      uVar6 = 0;
      uVar3 = (uint)uVar7;
      if (uVar3 != 0) {
        uVar6 = (uint)uVar11 / uVar3;
      }
      uVar6 = (uint)uVar11 - uVar6 * uVar3;
      uVar3 = nn::socket::InetNtohl(*(uint *)(puVar10 + (ulong)uVar6 * 0x10 + 0x58));
      uVar4 = nn::socket::InetHtonl(uVar3);
      *puVar9 = uVar4;
      uVar1 = nn::socket::InetNtohs(*(ushort *)(puVar10 + (ulong)uVar6 * 0x10 + 0x56));
      uVar2 = nn::socket::InetHtons(uVar1);
      uVar6 = *(uint *)(puVar10 + 0x50);
      uVar7 = (ulong)uVar6;
      uVar11 = uVar11 + 1;
      *(undefined2 *)((long)puVar9 + -2) = uVar2;
      puVar9 = puVar9 + 0x24;
    } while (uVar11 < uVar7);
  }
  *param_3 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x001e0084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

