
/* WARNING: Removing unreachable block (ram,0x031d8630) */

void FUN_031d85f4(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_4d;
  byte local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined8 local_3c;
  
  local_b0 = CONCAT44(local_b0._4_4_,3);
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    local_4d = 0;
    local_44 = 0;
    plVar1 = (long *)(param_1 + 0x1c210);
    local_98 = (undefined *)((long)&local_90 + 4);
    local_90 = 0x3130303500000040;
    local_3c = 0xffffffffffffffff;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_40 = 0;
    local_48 = *(byte *)(param_1 + 0x1f8);
    local_88 = 0;
    uStack_a8 = 0xffffffffffffffff;
    if (7 < local_48) {
      local_48 = 0xff;
    }
    local_b0 = 0xffffffff00000004;
    FUN_02ee2b00(puVar7,&local_b0,1);
    puVar2 = local_98;
    if (((0 < *(int *)(*plVar1 + 0x570)) && (lVar5 = **(long **)(*plVar1 + 0x578), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)) {
      local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar5 + 0x14));
      if (local_98 != &DAT_04063e02) {
        iVar3 = 4;
        if ((int)local_90 < 5) {
          iVar3 = (int)local_90 + -1;
        }
        memcpy(local_98,&DAT_04063e02,(long)iVar3);
        puVar2[iVar3] = 0;
      }
      FUN_02ee2b00(puVar7,&local_b0,1);
    }
    puVar2 = local_98;
    if (*(char *)(param_1 + 0x1c26c) != '\0') {
      lVar5 = *plVar1;
      iVar3 = *(int *)(lVar5 + 0x570);
      if (1 < iVar3) {
        lVar6 = *(long *)(*(long *)(lVar5 + 0x578) + 8);
        if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xa0), lVar6 != 0)) {
          local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar6 + 0x14));
          if (local_98 != &DAT_040939cd) {
            iVar3 = 4;
            if ((int)local_90 < 5) {
              iVar3 = (int)local_90 + -1;
            }
            memcpy(local_98,&DAT_040939cd,(long)iVar3);
            puVar2[iVar3] = 0;
          }
          FUN_02ee2b00(puVar7,&local_b0,1);
          lVar5 = *plVar1;
          iVar3 = *(int *)(lVar5 + 0x570);
        }
        puVar2 = local_98;
        if (((3 < iVar3) && (lVar5 = *(long *)(*(long *)(lVar5 + 0x578) + 0x18), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)) {
          local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar5 + 0x14));
          if (local_98 != &DAT_040d1202) {
            iVar3 = 4;
            if ((int)local_90 < 5) {
              iVar3 = (int)local_90 + -1;
            }
            memcpy(local_98,&DAT_040d1202,(long)iVar3);
            puVar2[iVar3] = 0;
          }
          FUN_02ee2b00(puVar7,&local_b0,1);
        }
      }
    }
  }
  return;
}

