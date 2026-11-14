
void FUN_01c03d00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  uint local_64;
  undefined **local_60;
  undefined4 local_58;
  
  local_74 = (undefined1 *)0x0;
  local_6c = (undefined1 *)0x3f80000000000000;
  lVar5 = *(long *)(*param_1 + 0xc0);
  local_84 = (undefined1 *)0x0;
  local_7c = (undefined1 *)0x3f80000000000000;
  if (lVar5 == 0) {
    local_74 = &DAT_3f8000003f800000;
    local_6c = &DAT_3f8000003f800000;
    local_84 = (undefined1 *)0x3f0000003f000000;
    local_7c = (undefined1 *)0x3f8000003f000000;
  }
  else {
    puVar6 = (undefined8 *)(lVar5 + 0x108);
    uVar4 = (**(code **)(*(long *)(lVar5 + 0x108) + 0x10))(puVar6);
    if ((uVar4 & 1) == 0) {
      local_74 = (undefined1 *)0x0;
      local_6c = (undefined1 *)0x3f80000000000000;
      local_84 = &DAT_3f8000003f800000;
      local_7c = &DAT_3f8000003f800000;
    }
    else {
      (**(code **)*puVar6)(puVar6,&local_74,&local_84);
    }
  }
  puVar2 = PTR_DAT_04bc4e60;
  lVar5 = *(long *)(param_1[4] + 0x218);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)**(long **)(*(long *)(lVar5 + 0x308) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    puVar1 = PTR_DAT_04bc4e58;
    uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar4 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    lVar8 = *(long *)(puVar6[0x43] + (ulong)(1 < *(uint *)(puVar6 + 0x42)) * 8);
    puVar6 = (undefined8 *)**(long **)(*(long *)(lVar5 + 0x308) + 0x3f8);
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar4 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    plVar7 = *(long **)(puVar6[0x41] + (ulong)(2 < *(uint *)(puVar6 + 0x40)) * 0x10);
    fVar9 = powf((float)local_74,2.25);
    local_74 = (undefined1 *)CONCAT44(local_74._4_4_,fVar9);
    fVar9 = powf(local_74._4_4_,2.25);
    local_74 = (undefined1 *)CONCAT44(fVar9,(float)local_74);
    fVar9 = powf((float)local_6c,2.25);
    local_6c = (undefined1 *)CONCAT44(local_6c._4_4_,fVar9);
    fVar9 = powf((float)local_84,2.25);
    local_84 = (undefined1 *)CONCAT44(local_84._4_4_,fVar9);
    fVar9 = powf(local_84._4_4_,2.25);
    local_84._4_4_ = fVar9;
    fVar9 = powf((float)local_7c,2.25);
    local_7c = (undefined1 *)CONCAT44(local_7c._4_4_,fVar9);
    if (plVar7 != (long *)0x0) {
      local_60 = &PTR_LAB_04a3ee98;
      fVar10 = 255.0;
      if ((float)local_84 <= 1.0) {
        fVar10 = (float)local_84 * 255.0;
      }
      fVar11 = 0.0;
      if (0.0 <= (float)local_84) {
        fVar11 = fVar10;
      }
      fVar10 = 255.0;
      if (local_84._4_4_ <= 1.0) {
        fVar10 = local_84._4_4_ * 255.0;
      }
      fVar12 = 0.0;
      if (0.0 <= local_84._4_4_) {
        fVar12 = fVar10;
      }
      fVar10 = 255.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9 * 255.0;
      }
      fVar13 = 0.0;
      if (0.0 <= fVar9) {
        fVar13 = fVar10;
      }
      fVar9 = 255.0;
      if (local_7c._4_4_ <= 1.0) {
        fVar9 = local_7c._4_4_ * 255.0;
      }
      local_58 = 0x1a;
      fVar10 = 0.0;
      if (0.0 <= local_7c._4_4_) {
        fVar10 = fVar9;
      }
      local_64 = (int)fVar11 << 0x18 | (int)fVar12 << 0x10 | (int)fVar13 << 8 | (int)fVar10;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x1b8))(plVar7[1],1,1,0,&local_64);
    }
    if ((lVar8 != 0) && (plVar7 = *(long **)(lVar8 + 0x48), plVar7 != (long *)0x0)) {
      local_60 = &PTR_LAB_04a3ee98;
      local_58 = 0x32;
      fVar9 = 255.0;
      if ((float)local_74 <= 1.0) {
        fVar9 = (float)local_74 * 255.0;
      }
      fVar10 = 0.0;
      if (0.0 <= (float)local_74) {
        fVar10 = fVar9;
      }
      fVar9 = 255.0;
      if (local_74._4_4_ <= 1.0) {
        fVar9 = local_74._4_4_ * 255.0;
      }
      fVar11 = 0.0;
      if (0.0 <= local_74._4_4_) {
        fVar11 = fVar9;
      }
      fVar9 = 255.0;
      if ((float)local_6c <= 1.0) {
        fVar9 = (float)local_6c * 255.0;
      }
      fVar12 = 0.0;
      if (0.0 <= (float)local_6c) {
        fVar12 = fVar9;
      }
      fVar9 = 255.0;
      if (local_6c._4_4_ <= 1.0) {
        fVar9 = local_6c._4_4_ * 255.0;
      }
      fVar13 = 0.0;
      if (0.0 <= local_6c._4_4_) {
        fVar13 = fVar9;
      }
      local_64 = (int)fVar10 << 0x18 | (int)fVar11 << 0x10 | (int)fVar12 << 8 | (int)fVar13;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x338))(plVar7[1],0,0,&local_64);
      local_60 = &PTR_LAB_04a3ee98;
      local_58 = 0x32;
      fVar9 = 255.0;
      if ((float)local_74 <= 1.0) {
        fVar9 = (float)local_74 * 255.0;
      }
      fVar10 = 0.0;
      if (0.0 <= (float)local_74) {
        fVar10 = fVar9;
      }
      fVar9 = 255.0;
      if (local_74._4_4_ <= 1.0) {
        fVar9 = local_74._4_4_ * 255.0;
      }
      fVar11 = 0.0;
      if (0.0 <= local_74._4_4_) {
        fVar11 = fVar9;
      }
      fVar9 = 255.0;
      if ((float)local_6c <= 1.0) {
        fVar9 = (float)local_6c * 255.0;
      }
      fVar12 = 0.0;
      if (0.0 <= (float)local_6c) {
        fVar12 = fVar9;
      }
      fVar9 = 255.0;
      if (local_6c._4_4_ <= 1.0) {
        fVar9 = local_6c._4_4_ * 255.0;
      }
      fVar13 = 0.0;
      if (0.0 <= local_6c._4_4_) {
        fVar13 = fVar9;
      }
      local_64 = (int)fVar10 << 0x18 | (int)fVar11 << 0x10 | (int)fVar12 << 8 | (int)fVar13;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x338))(plVar7[1],1,0,&local_64);
    }
  }
  return;
}

