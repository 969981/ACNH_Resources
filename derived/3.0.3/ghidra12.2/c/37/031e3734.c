
/* WARNING: Removing unreachable block (ram,0x031e3770) */

void FUN_031e3734(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined4 *local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_55;
  byte local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  int local_34;
  
  local_b8 = CONCAT44(local_b8._4_4_,3);
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc7278);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c218) == 1) {
    local_34 = 3;
    goto LAB_031e39c0;
  }
  local_34 = 1;
  iVar4 = *(int *)(param_1 + 0x1c180);
  if (iVar4 < 0) {
    if (((((*(byte *)(param_1 + 0x1c220) & 1) == 0) && ((*(byte *)(param_1 + 0x1c228) & 1) == 0)) &&
        ((*(byte *)(param_1 + 0x1c230) & 1) == 0)) &&
       ((((*(byte *)(param_1 + 0x1c238) & 1) == 0 && ((*(byte *)(param_1 + 0x1c240) & 1) == 0)) &&
        (((*(byte *)(param_1 + 0x1c248) & 1) == 0 && ((*(byte *)(param_1 + 0x1c250) & 1) == 0))))))
    {
      bVar2 = *(byte *)(param_1 + 0x1c258);
      goto joined_r0x031e3824;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c1f0) == iVar4) {
      iVar6 = 0;
    }
    else if (*(int *)(param_1 + 0x1c1f4) == iVar4) {
      iVar6 = 1;
    }
    else if (*(int *)(param_1 + 0x1c1f8) == iVar4) {
      iVar6 = 2;
    }
    else if (*(int *)(param_1 + 0x1c1fc) == iVar4) {
      iVar6 = 3;
    }
    else if (*(int *)(param_1 + 0x1c200) == iVar4) {
      iVar6 = 4;
    }
    else if (*(int *)(param_1 + 0x1c204) == iVar4) {
      iVar6 = 5;
    }
    else if (*(int *)(param_1 + 0x1c208) == iVar4) {
      iVar6 = 6;
    }
    else {
      iVar6 = 7;
      if (*(int *)(param_1 + 0x1c20c) != iVar4) {
        iVar6 = -1;
      }
    }
    if (iVar6 == DAT_05717f54) {
      lVar7 = 0;
    }
    else if (iVar6 == DAT_05717f58) {
      lVar7 = 1;
    }
    else if (iVar6 == DAT_05717f5c) {
      lVar7 = 2;
    }
    else if (iVar6 == DAT_05717f60) {
      lVar7 = 3;
    }
    else if (iVar6 == DAT_05717f64) {
      lVar7 = 4;
    }
    else if (iVar6 == DAT_05717f68) {
      lVar7 = 5;
    }
    else if (iVar6 == DAT_05717f6c) {
      lVar7 = 6;
    }
    else {
      if (iVar6 != DAT_05717f70) goto LAB_031e39c0;
      lVar7 = 7;
    }
    if (0x27 < *(uint *)(param_1 + 0x1c21c + lVar7 * 8)) goto LAB_031e39c0;
    bVar2 = *(byte *)(param_1 + 0x1c21c + lVar7 * 8 + 4);
joined_r0x031e3824:
    if ((bVar2 & 1) == 0) goto LAB_031e39c0;
  }
  local_34 = 2;
LAB_031e39c0:
  if (*(int *)(param_1 + 0x1c2a8) != local_34) {
    *(int *)(param_1 + 0x1c2a8) = local_34;
    local_a0 = &uStack_94;
    local_55 = 0;
    local_4c = 0;
    local_48 = 0;
    local_90 = 0;
    local_a8 = PTR_DAT_04bb2bc0 + 0x10;
    local_44 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffffffffff;
    local_50 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_50) {
      local_50 = 0xff;
    }
    local_b8 = 0xffffffff00000004;
    uVar1 = 0x35303634;
    if (local_34 != 2) {
      uVar1 = 0x31303634;
    }
    uStack_94 = 0x34303634;
    if (local_34 != 3) {
      uStack_94 = uVar1;
    }
    local_98 = 0x40;
    FUN_02ee2b00(puVar9,&local_b8,1);
    puVar3 = local_a0;
    lVar7 = *(long *)(param_1 + 0x1c210);
    iVar4 = *(int *)(lVar7 + 0x570);
    if (0 < iVar4) {
      if ((**(long **)(lVar7 + 0x578) != 0) &&
         (lVar8 = *(long *)(**(long **)(lVar7 + 0x578) + 0xa0), lVar8 != 0)) {
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar8 + 0x14));
        if (local_a0 != (undefined4 *)&DAT_04100723) {
          iVar4 = 4;
          if (local_98 < 5) {
            iVar4 = local_98 + -1;
          }
          memcpy(local_a0,&DAT_04100723,(long)iVar4);
          *(undefined1 *)((long)puVar3 + (long)iVar4) = 0;
        }
        FUN_02ee2b00(puVar9,&local_b8,1);
        lVar7 = *(long *)(param_1 + 0x1c210);
        iVar4 = *(int *)(lVar7 + 0x570);
      }
      puVar3 = local_a0;
      if ((((2 < iVar4) && (lVar7 = *(long *)(*(long *)(lVar7 + 0x578) + 0x10), lVar7 != 0)) &&
          (lVar7 = *(long *)(lVar7 + 0xa0), lVar7 != 0)) && (*(char *)(lVar7 + 0xbc) != '\0')) {
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar7 + 0x14));
        if (local_a0 != (undefined4 *)&DAT_0407915c) {
          iVar4 = 4;
          if (local_98 < 5) {
            iVar4 = local_98 + -1;
          }
          memcpy(local_a0,&DAT_0407915c,(long)iVar4);
          *(undefined1 *)((long)puVar3 + (long)iVar4) = 0;
        }
        FUN_02ee2b00(puVar9,&local_b8,1);
      }
    }
  }
  return;
}

