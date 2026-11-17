
/* WARNING: Removing unreachable block (ram,0x02e902e4) */
/* WARNING: Removing unreachable block (ram,0x02e902f0) */
/* WARNING: Removing unreachable block (ram,0x02e90300) */
/* WARNING: Removing unreachable block (ram,0x02e90310) */
/* WARNING: Removing unreachable block (ram,0x02e90320) */
/* WARNING: Removing unreachable block (ram,0x02e90348) */
/* WARNING: Removing unreachable block (ram,0x02e90350) */
/* WARNING: Removing unreachable block (ram,0x02e9035c) */
/* WARNING: Removing unreachable block (ram,0x02e90378) */
/* WARNING: Removing unreachable block (ram,0x02e90360) */
/* WARNING: Removing unreachable block (ram,0x02e90370) */
/* WARNING: Removing unreachable block (ram,0x02e9037c) */
/* WARNING: Removing unreachable block (ram,0x02e90440) */
/* WARNING: Removing unreachable block (ram,0x02e9049c) */
/* WARNING: Removing unreachable block (ram,0x02e904f4) */
/* WARNING: Removing unreachable block (ram,0x02e904a8) */
/* WARNING: Removing unreachable block (ram,0x02e904fc) */
/* WARNING: Removing unreachable block (ram,0x02e90508) */
/* WARNING: Removing unreachable block (ram,0x02e90548) */
/* WARNING: Removing unreachable block (ram,0x02e9057c) */
/* WARNING: Removing unreachable block (ram,0x02e9058c) */
/* WARNING: Removing unreachable block (ram,0x02e90598) */
/* WARNING: Removing unreachable block (ram,0x02e905c4) */
/* WARNING: Removing unreachable block (ram,0x02e905c8) */
/* WARNING: Removing unreachable block (ram,0x02e905ec) */
/* WARNING: Removing unreachable block (ram,0x02e90644) */
/* WARNING: Removing unreachable block (ram,0x02e9062c) */
/* WARNING: Removing unreachable block (ram,0x02e90648) */
/* WARNING: Removing unreachable block (ram,0x02e90660) */
/* WARNING: Removing unreachable block (ram,0x02e9066c) */
/* WARNING: Removing unreachable block (ram,0x02e906a4) */
/* WARNING: Removing unreachable block (ram,0x02e906b0) */
/* WARNING: Removing unreachable block (ram,0x02e9085c) */
/* WARNING: Removing unreachable block (ram,0x02e908ac) */
/* WARNING: Removing unreachable block (ram,0x02e9092c) */
/* WARNING: Removing unreachable block (ram,0x02e90974) */
/* WARNING: Removing unreachable block (ram,0x02e90988) */
/* WARNING: Removing unreachable block (ram,0x02e90b34) */
/* WARNING: Removing unreachable block (ram,0x02e90b84) */
/* WARNING: Removing unreachable block (ram,0x02e90bfc) */
/* WARNING: Removing unreachable block (ram,0x02e90c48) */
/* WARNING: Removing unreachable block (ram,0x02e90c5c) */
/* WARNING: Removing unreachable block (ram,0x02e90de0) */
/* WARNING: Removing unreachable block (ram,0x02e901c8) */
/* WARNING: Removing unreachable block (ram,0x02e90208) */

void FUN_02e90000(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar4 = PTR_DAT_04bc4d98;
  puVar3 = PTR_DAT_04bc4d90;
  lVar7 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  uVar2 = *(uint *)(lVar7 + 0x2f8);
  if (0 < (int)uVar2) {
    uVar8 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    do {
      if ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x208) && uVar8 < *(uint *)(lVar7 + 0x208)) {
        puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x210) + uVar8 * 8);
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
        *(undefined **)puVar3 = puVar1;
        __cxa_guard_release(puVar4);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar9)(puVar9,puVar3), (uVar6 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02e90298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_02e9029c + (ulong)DAT_04180dbe * 4))();
        return;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  FUN_02e981b0(param_1,param_2,0);
  return;
}

