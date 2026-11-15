
/* WARNING: Removing unreachable block (ram,0x0248cc20) */
/* WARNING: Removing unreachable block (ram,0x0248cd10) */

void FUN_0248cba4(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  float local_84;
  float local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  byte local_60;
  undefined2 local_5f;
  undefined1 *local_5c;
  undefined1 local_54;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_18;
  
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (puVar6[0x227] == 0) {
    local_18 = (ulong)local_18._4_4_ << 0x20;
LAB_0248cc64:
    iVar4 = *(int *)(param_1 + 0x22c8);
    if (iVar4 - 1U < 0xf) {
      if (iVar4 == 5) {
        FUN_0248d214(param_1,1);
      }
      fVar7 = *(float *)(param_1 + 0x22c0) + -0.2;
      *(float *)(param_1 + 0x22c0) = fVar7;
      *(float *)(param_1 + 0x22b0) = *(float *)(param_1 + 0x22b0) + *(float *)(param_1 + 0x22bc);
      *(float *)(param_1 + 0x22b4) = fVar7 + *(float *)(param_1 + 0x22b4);
      *(float *)(param_1 + 0x22b8) = *(float *)(param_1 + 0x22b8) + *(float *)(param_1 + 0x22c4);
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x0248cce0;
    }
    if (iVar4 != 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x0248cce0;
    }
    uVar1 = (uint)*(ushort *)(param_1 + 0x1900) * 0x10000 + 0x20000000 >> 0x1e;
    local_18 = CONCAT44(local_18._4_4_,uVar1);
    local_80 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
    local_84 = (float)*(int *)(param_1 + 0x1902) * 0.001;
    fVar7 = (float)*(int *)(param_1 + 0x1908) * 0.001;
    local_7c = CONCAT44(local_7c._4_4_,fVar7);
    if (uVar1 < 4) {
                    /* WARNING: Jumptable with 0 entries at 0x0248cdc0 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0248cdc4 + (ulong)(byte)(&DAT_0417aa0f)[uVar1] * 4))();
      return;
    }
    iVar4 = (int)local_84;
    bVar3 = local_84 < 0.0;
    uVar8 = FUN_016e026c(0,&local_84,0,0);
    *(float *)(param_1 + 0x22b0) =
         (float)(int)((int)((float)iVar4 / 5.0) - (uint)bVar3 & 0xfffffffe) * 5.0 + 5.0;
    *(undefined4 *)(param_1 + 0x22b4) = uVar8;
    *(float *)(param_1 + 0x22b8) =
         (float)(int)((int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0) & 0xfffffffe) * 5.0 + 5.0
    ;
    *(undefined8 *)(param_1 + 0x22bc) = 0;
    *(undefined4 *)(param_1 + 0x22c4) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) goto LAB_0248ce80;
LAB_0248cce4:
    lVar2 = puVar6[0x227];
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,*(uint *)(puVar6 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_84 = 4.76441e-44;
    uVar5 = FUN_03850890(puVar6[0x227],0x22,0,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
    if ((uVar5 & 1) == 0) goto LAB_0248cc64;
    *(undefined1 *)(param_1 + 0x22ac) = 1;
    FUN_0248d214(param_1,0);
    puVar6 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0248cce0:
    if (puVar6 != (undefined8 *)0x0) goto LAB_0248cce4;
LAB_0248ce80:
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
      lVar2 = DAT_052413b8;
      goto joined_r0x0248d074;
    }
    puVar6 = &DAT_05240280;
    lVar2 = DAT_052413b8;
  }
  local_18._4_4_ = (uint)(local_18 >> 0x20);
joined_r0x0248d074:
  if (lVar2 != 0) {
    local_18 = CONCAT44(local_18._4_4_,*(uint *)(puVar6 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_84 = 6.30584e-44;
    uVar5 = FUN_03850890(lVar2,0x2d,0,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x22ac) = 0;
      *(uint *)(param_1 + 0x22c8) =
           (*(uint *)(param_1 + 0x22c8) & ((int)*(uint *)(param_1 + 0x22c8) >> 0x1f ^ 0xffffffffU))
           - 1;
      return;
    }
  }
  *(uint *)(param_1 + 0x22c8) =
       (*(uint *)(param_1 + 0x22c8) & ((int)*(uint *)(param_1 + 0x22c8) >> 0x1f ^ 0xffffffffU)) - 1;
  if (*(char *)(param_1 + 0x22ac) != '\0') {
    local_6c = 0;
    local_5c = &DAT_3f8000003f800000;
    local_64 = 0;
    local_5f = 0;
    local_54 = 0;
    local_50 = 0;
    uStack_4b = 0;
    uStack_48 = 0;
    local_18 = 0xfffe;
    FUN_0277d4ac(&local_18);
    local_7c = *(undefined8 *)(param_1 + 0x22b0);
    local_74 = *(undefined4 *)(param_1 + 0x22b8);
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    local_60 = *(byte *)(param_1 + 0x1ee8);
    local_80 = (float)((ulong)*(undefined8 *)(param_1 + 0x190c) >> 0x20);
    local_84 = (float)*(undefined8 *)(param_1 + 0x190c);
    local_70 = 0x3f800000;
    if (7 < local_60) {
      local_60 = 0xff;
    }
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    FUN_0170d1d8(puVar6,&local_84);
  }
  return;
}

