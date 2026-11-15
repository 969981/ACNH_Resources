
void FUN_01f72938(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 local_34;
  undefined8 local_18;
  
  if (((((*(int *)(param_1 + 0x77f4) != 0x3f) && (*(int *)(param_1 + 0x77f4) != 0x3c)) &&
       (*(int *)(param_1 + 0x77b0) != 0x3f)) && (*(int *)(param_1 + 0x77b0) != 0x3c)) &&
     ((lVar5 = *(long *)(param_1 + 8), *(int *)(lVar5 + 0x750) == 0 ||
      (*(int *)(lVar5 + 0x750) == 1)))) {
    *(ushort *)(param_1 + 0xaf64) = *(ushort *)(param_1 + 0xaf64) & 0xfeff;
    if (*(int *)(param_1 + 0xaf90) != 2) {
      uVar1 = *(uint *)(lVar5 + 0x288);
      *(undefined4 *)(lVar5 + 0x288) = *(undefined4 *)(lVar5 + 0x28c);
      uVar1 = uVar1 ^ uVar1 << 0xb;
      *(undefined4 *)(lVar5 + 0x28c) = *(undefined4 *)(lVar5 + 0x290);
      uVar2 = *(uint *)(lVar5 + 0x294);
      *(uint *)(lVar5 + 0x290) = uVar2;
      uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
      *(uint *)(lVar5 + 0x294) = uVar1;
      *(int *)(param_1 + 0xaf88) = (int)((ulong)uVar1 * 900 >> 0x20) + 0x1194;
      uVar6 = FUN_01e3cc1c(*(undefined8 *)(param_1 + 8));
      lVar5 = *(long *)(param_1 + 8);
      if ((uVar6 & 1) != 0) {
        FUN_01e3cdc4();
        lVar5 = *(long *)(param_1 + 8);
      }
    }
    puVar7 = *(undefined8 **)(lVar5 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar7 = &DAT_05240280;
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    local_34 = *param_2;
    uVar6 = FUN_022069a0(puVar7,&local_34,1);
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      local_18 = 0;
      uVar3 = *param_2;
      FUN_01e5a930(0x40000000,lVar5,0xc,PTR_DAT_04bb2150,(long)&local_18 + 4,&local_18,
                   PTR_DAT_04bc1600,6);
      *(undefined4 *)(lVar5 + 0x3ac) = uVar3;
    }
  }
  return;
}

