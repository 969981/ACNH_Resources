
/* WARNING: Removing unreachable block (ram,0x034403dc) */

void FUN_03440390(int *param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *__src;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  byte local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  
  local_e0 = CONCAT44(local_e0._4_4_,3);
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if (((puVar6 != (undefined8 *)0x0) &&
      (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) &&
     (iVar2 = *param_1, iVar2 != 0)) {
    lVar7 = *(long *)(param_1 + 2);
    iVar8 = 0;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    do {
      if (*(char *)(lVar7 + (long)iVar8 * 0x30 + 0x28) != '\0') {
        local_7d = 0;
        local_c0 = 0x40;
        local_e0 = 0xffffffffffffffff;
        local_d8 = 0xffffffffffffffff;
        local_bc[0] = 0;
        local_74 = 0;
        local_6c = 0xffffffffffffffff;
        local_70 = 0;
        local_78 = 0xff;
        __src = *(undefined1 **)(lVar7 + (long)iVar8 * 0x30);
        local_d0 = puVar1;
        puStack_c8 = local_bc;
        if (local_bc != __src) {
          lVar5 = 0;
          do {
            if (__src[lVar5] == '\0') {
LAB_03440568:
              iVar4 = (int)lVar5;
joined_r0x0344056c:
              if (0x3f < iVar4) {
                iVar4 = 0x3f;
              }
              goto LAB_03440450;
            }
            if (__src[lVar5 + 1] == '\0') {
              lVar5 = lVar5 + 1;
              goto LAB_03440568;
            }
            if (__src[lVar5 + 2] == '\0') {
              iVar4 = (int)lVar5 + 2;
              goto joined_r0x0344056c;
            }
            lVar5 = lVar5 + 3;
          } while (lVar5 != 0x80001);
          iVar4 = 0;
LAB_03440450:
          memcpy(local_bc,__src,(long)iVar4);
          local_bc[iVar4] = 0;
        }
        lVar5 = lVar7 + (long)iVar8 * 0x30;
        local_e0 = *(undefined8 *)(lVar5 + 8);
        local_d8 = *(undefined8 *)(lVar5 + 0x10);
        local_74 = *(undefined4 *)(lVar5 + 0x18);
        local_6c = *(undefined8 *)(lVar5 + 0x20);
        local_78 = *param_2;
        local_70 = *(undefined1 *)(lVar5 + 0x1c);
        if (7 < local_78) {
          local_78 = 0xff;
        }
        FUN_02ee2b00(puVar6,&local_e0,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  return;
}

