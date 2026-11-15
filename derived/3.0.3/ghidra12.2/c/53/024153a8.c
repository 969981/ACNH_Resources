
/* WARNING: Removing unreachable block (ram,0x02415424) */

void FUN_024153a8(long param_1)

{
  char *__dest;
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  int iVar7;
  undefined4 local_140;
  undefined1 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  int local_130;
  char *local_e0;
  int local_d8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  local_50 = 0;
  local_48 = (long *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  if (puVar5[0x227] == 0) {
    local_38 = (ulong)local_38._4_4_ << 0x20;
  }
  else {
    local_38 = CONCAT44(local_38._4_4_,*(uint *)(puVar5 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_140 = 0x13;
    uVar1 = FUN_03850a90(puVar5[0x227],0x13,&local_60,*(uint *)(puVar5 + 0x2d3) >> 1 & 1);
    if ((uVar1 & 1) != 0) {
      fVar6 = 1.0;
      if ((local_48 != (long *)0x0) && (lVar4 = *local_48, lVar4 != 0)) {
        fVar6 = *(float *)(lVar4 + 0x18);
        if (fVar6 < 0.0) {
          fVar6 = *(float *)(local_48[1] + 0xc);
        }
        uVar3 = (uint)(fVar6 - *(float *)(lVar4 + 0x14));
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        fVar6 = (float)uVar3;
      }
      iVar7 = *(int *)(param_1 + 0xc20);
      lVar4 = FUN_0251e98c(1);
      plVar2 = (long *)(**(code **)(*(long *)(lVar4 + 0x1da8) + 0xf0))(lVar4 + 0x1da8);
      fVar6 = (float)(**(code **)(*plVar2 + 0x10))((float)iVar7 / fVar6);
      uVar3 = *(uint *)(param_1 + 0xc18);
      lVar4 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
      iVar7 = (int)(fVar6 * (float)-uVar3);
      if (uVar3 < 0x80000001) {
        iVar7 = -(int)(fVar6 * (float)uVar3);
      }
      *(uint *)(lVar4 + 4) = uVar3 + iVar7;
      *(int *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) + 1;
    }
  }
  if ((*(int *)(param_1 + 0x178) == 0) &&
     (FUN_02332b04(param_1,1,0), *(int *)(param_1 + 0x178) == 0)) {
    uVar1 = FUN_024bc518(param_1);
    if ((uVar1 & 1) != 0) {
      FUN_0230e2b0(&local_140);
      __dest = (char *)CONCAT44(uStack_134,local_138);
      if (__dest != "Player_InsectDemo") {
        iVar7 = 0x11;
        if (local_130 < 0x12) {
          iVar7 = local_130 + -1;
        }
        memcpy(__dest,"Player_InsectDemo",(long)iVar7);
        __dest[iVar7] = '\0';
      }
      if (local_e0 != "MosquitoBite") {
        iVar7 = 0xc;
        if (local_d8 < 0xd) {
          iVar7 = local_d8 + -1;
        }
        memcpy(local_e0,"MosquitoBite",(long)iVar7);
        local_e0[iVar7] = '\0';
      }
      local_88 = 0xc;
      local_38 = 600;
      FUN_0277d4ac(&local_38);
      local_78 = 1;
      local_74 = 1;
      local_90 = (undefined4)local_38;
      uStack_8c = local_38._4_4_;
      local_68 = 0x3c;
      FUN_02328d9c(param_1,&local_140);
      FUN_0232f3e0(param_1);
      FUN_0232ed60(param_1);
    }
    uVar1 = FUN_0231eddc(param_1,0);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar1 & 1) == 0))
    {
      local_138 = 0;
      local_140 = 6;
      local_13c = 1;
      FUN_02374e74(param_1,&local_140);
    }
  }
  return;
}

