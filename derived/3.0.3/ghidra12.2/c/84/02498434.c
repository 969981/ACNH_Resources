
void FUN_02498434(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *__dest;
  byte local_58 [4];
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  if (*(char *)(param_1 + 0x1922) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    lVar4 = FUN_0170b82c(puVar3,uVar1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    lVar5 = FUN_017067d4(puVar3,uVar1,0);
    if (lVar5 != 0) {
      FUN_01752fd8(lVar5,PTR_DAT_04bbe268,0,0,0);
    }
    if (lVar4 != 0) {
      __dest = *(undefined **)(lVar4 + 0x2f0);
      if (__dest != PTR_DAT_04bb2f90 + 0x31) {
        iVar2 = 6;
        if (*(int *)(lVar4 + 0x2f8) < 7) {
          iVar2 = *(int *)(lVar4 + 0x2f8) + -1;
        }
        memcpy(__dest,PTR_DAT_04bb2f90 + 0x31,(long)iVar2);
        __dest[iVar2] = 0;
      }
      *(undefined4 *)(lVar4 + 0x340) = 0xffffffff;
      *(undefined2 *)(lVar4 + 0x42c) = 0x100;
      *(undefined4 *)(lVar4 + 0x428) = 3;
      *(undefined8 *)(lVar4 + 0x420) = 0;
      *(undefined8 *)(lVar4 + 0x40c) = *(undefined8 *)(lVar4 + 0x3dc);
      *(undefined8 *)(lVar4 + 0x404) = *(undefined8 *)(lVar4 + 0x3d4);
      *(undefined8 *)(lVar4 + 0x3ec) = *(undefined8 *)(lVar4 + 0x3bc);
      *(undefined8 *)(lVar4 + 0x3e4) = *(undefined8 *)(lVar4 + 0x3b4);
      *(undefined8 *)(lVar4 + 0x3fc) = *(undefined8 *)(lVar4 + 0x3cc);
      *(undefined8 *)(lVar4 + 0x3f4) = *(undefined8 *)(lVar4 + 0x3c4);
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffff9;
  }
  local_58[0] = *(byte *)(param_1 + 0x1ee8);
  local_48 = 0x3dcccccd;
  local_44 = 0;
  local_4c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  if (7 < local_58[0]) {
    local_58[0] = 0xff;
  }
  local_54 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_58,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

