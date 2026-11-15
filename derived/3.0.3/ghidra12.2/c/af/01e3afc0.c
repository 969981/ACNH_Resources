
void FUN_01e3afc0(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  void *__dest;
  void *__src;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_24;
  
  lVar10 = *(long *)(param_1 + 0x3b0);
  if (lVar10 != 0) {
    if (((*(uint *)(param_1 + 0x69c) >> 9 & 1) != 0) &&
       (*(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) & 0xfffffdff,
       *(long *)(param_1 + 0x3c0) != 0)) {
      puVar11 = *(undefined8 **)(param_1 + 0x60);
      if (puVar11 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar11 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar11 = &DAT_05240280;
        }
      }
      iVar6 = *(int *)(puVar11 + 0x270);
      if (1 < iVar6) {
        iVar4 = iVar6 + *(int *)((long)puVar11 + 0x137c) + -1;
        iVar6 = 0;
        if (*(int *)(puVar11 + 0x26f) <= iVar4) {
          iVar6 = *(int *)(puVar11 + 0x26f);
        }
        (*(code *)**(undefined8 **)(puVar11[0x26e] + (long)(iVar4 - iVar6) * 0x38))();
        iVar6 = *(int *)(puVar11 + 0x270) + -1;
        *(int *)(puVar11 + 0x270) = iVar6;
      }
      if (*(long *)(puVar11[600] + 0x280) != 0) {
        iVar4 = iVar6 + *(int *)((long)puVar11 + 0x137c) + -1;
        iVar6 = 0;
        if (*(int *)(puVar11 + 0x26f) <= iVar4) {
          iVar6 = *(int *)(puVar11 + 0x26f);
        }
        local_50 = PTR_DAT_04bb2020 + 0x10;
        local_48 = *(undefined8 *)(puVar11[0x26e] + (long)(iVar4 - iVar6) * 0x38 + 8);
        FUN_03ef3440(*(long *)(puVar11[600] + 0x280),&local_50);
      }
      lVar8 = *(long *)(param_1 + 0x3c0);
      bVar3 = *(byte *)(lVar8 + 0x290);
      uVar2 = bVar3 & 0xfffffff7;
      uVar9 = 4;
      *(char *)(lVar8 + 0x290) = (char)uVar2;
      if (((bVar3 >> 4 & 1) == 0) && (uVar9 = 2, (uVar2 >> 2 & 1) == 0)) {
        uVar9 = uVar2 >> 1 & 1;
      }
      local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar9);
      *(uint *)(lVar8 + 0x294) = uVar9;
    }
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar10,0xd,PTR_DAT_04bb2150,&local_50,&local_24,PTR_DAT_04bc1600,6);
    puVar5 = PTR_DAT_04bbde38;
    __dest = *(void **)(lVar10 + 0x3b8);
    (**(code **)(*(long *)PTR_DAT_04bbde38 + 0x18))(PTR_DAT_04bbde38);
    __src = *(void **)(puVar5 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar8) == '\0') goto LAB_01e3b1fc;
        lVar1 = *(long *)(puVar5 + 8) + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01e3b1fc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01e3b1fc;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01e3b1fc:
      iVar6 = (int)lVar8;
      if (*(int *)(lVar10 + 0x3c0) <= (int)lVar8) {
        iVar6 = *(int *)(lVar10 + 0x3c0) + -1;
      }
      memcpy(__dest,__src,(long)iVar6);
      *(undefined1 *)((long)__dest + (long)iVar6) = 0;
    }
    *(undefined4 *)(lVar10 + 0x3a0) = 0;
    *(undefined1 *)(lVar10 + 0x410) = 0;
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,8);
    *(uint *)((long)puVar11 + 0x15f4) = *(uint *)((long)puVar11 + 0x15f4) | 0x100;
    if (((puVar11[0x227] != 0) && (lVar10 = *(long *)(puVar11[0x227] + 0x78), lVar10 != 0)) &&
       (plVar7 = *(long **)(lVar10 + 0x48), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01e3b2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x28))(plVar7,&DAT_05248628,1);
      return;
    }
  }
  return;
}

