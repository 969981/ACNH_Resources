
void FUN_038b7edc(long param_1,long *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  StandardAllocator *this;
  code *pcVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  byte bVar19;
  byte bVar20;
  undefined1 uVar21;
  ulong __size;
  size_t sVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int local_ac;
  uint local_a8;
  uint local_a4;
  undefined *local_a0;
  undefined8 local_98;
  
  nv::SetGraphicsAllocator
            ((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_038b8ab0,
             (_func_void_void_ptr_void_ptr *)&LAB_038b8ac0,
             (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_038b8ad0,(void *)0x0);
  pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 0xd0),0x1000);
  nv::InitializeGraphics(pvVar10,(ulong)*(uint *)(param_1 + 0xd0));
  puVar3 = PTR_DAT_04bb2698;
  if (*(int *)(param_1 + 0xd4) != 0) {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,*(int *)(param_1 + 0xd4),8);
    if (*(long *)puVar3 == 0) {
      this = malloc(0x48);
    }
    else {
      this = (StandardAllocator *)(**(code **)(*param_2 + 0x30))(param_2,0x48,8);
    }
    nn::mem::StandardAllocator::StandardAllocator(this,pvVar10,(ulong)*(uint *)(param_1 + 0xd4));
    *(StandardAllocator **)(param_1 + 0x1b0) = this;
    nv::SetGraphicsDevtoolsAllocator
              ((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_038b8ae0,
               (_func_void_void_ptr_void_ptr *)&LAB_038b8b00,
               (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_038b8b10,this);
  }
  nn::vi::Initialize();
  nn::vi::OpenDefaultDisplay((Display **)(param_1 + 0x1d8));
  nn::vi::CreateLayer((Layer **)(param_1 + 0x1e0),*(Display **)(param_1 + 0x1d8));
  nn::vi::GetDisplayVsyncEvent((SystemEventType *)(param_1 + 0x210),*(Display **)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x110) = *param_3;
  uVar23 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xb4));
  uVar24 = param_3[1];
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = uVar24;
  *(undefined4 *)(param_1 + 0x120) = uVar23;
  uVar23 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0x124) = uVar23;
  pcVar11 = (code *)nvnBootstrapLoader("nvnDeviceInitialize");
  lVar12 = nvnBootstrapLoader("nvnDeviceGetProcAddress");
  if (pcVar11 == (code *)0x0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  FUN_003491d0(0,lVar12);
  (**(code **)PTR_DAT_04bcf368)(&local_a0);
  if (*(char *)(param_1 + 0xbf) == '\0') {
    uVar23 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0xe4) - 1;
    if (uVar1 < 4) {
      uVar23 = (&DAT_04102020)[(int)uVar1];
    }
    else {
      uVar23 = 0x20;
    }
  }
  (**(code **)PTR_DAT_04bcf370)(&local_a0,uVar23);
  if (*(long *)puVar3 == 0) {
    puVar13 = malloc(0x3000);
  }
  else {
    puVar13 = (undefined *)(**(code **)(*param_2 + 0x30))(param_2,0x3000,8);
  }
  cVar8 = (*pcVar11)(puVar13,&local_a0);
  if (cVar8 == '\0') {
    return;
  }
  FUN_003491d0(puVar13,lVar12);
  puVar5 = PTR_DAT_04bcf028;
  (**(code **)PTR_DAT_04bcf028)(puVar13,0,&local_a0);
  (**(code **)puVar5)(puVar13,1,&local_a4);
  if ((int)local_a0 != 0x37) {
    return;
  }
  if ((int)local_a4 < 0xf) {
    return;
  }
  if (*(char *)(param_1 + 0xbf) == '\0' && *(char *)(param_1 + 0xc0) == '\0') {
    bVar20 = 0;
    bVar19 = 0;
  }
  else {
    (**(code **)PTR_DAT_04bcf3b0)(puVar13,PTR_LAB_04bd0c48,0,1);
    bVar19 = *(byte *)(param_1 + 0xc0);
    bVar20 = *(byte *)(param_1 + 0xbf);
  }
  local_98 = (char *)CONCAT44(CONCAT22(local_98._6_2_,CONCAT11(bVar19 | bVar20,bVar19)),
                              *(undefined4 *)(param_1 + 0xe8));
  local_a0 = puVar13;
  if (*(long *)puVar3 == 0) {
    plVar14 = malloc(0x1e8);
  }
  else {
    plVar14 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x1e8,8);
  }
  FUN_038c2f90(plVar14,&local_a0);
  puVar4 = PTR_DAT_04bbd7c0;
  lVar12 = *(long *)puVar3;
  *(long **)PTR_DAT_04bbd7c0 = plVar14;
  if (lVar12 == 0) {
    puVar15 = malloc(0x48);
  }
  else {
    puVar15 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,0x48,8);
  }
  *puVar15 = 0;
  FUN_038e18e4(puVar15 + 2);
  plVar14[5] = (long)puVar15;
  (**(code **)(*plVar14 + 0x10))(plVar14,param_2);
  nn::os::LockMutex((MutexType *)(plVar14[5] + 0x28));
  (**(code **)(*plVar14 + 0x18))(plVar14,param_2);
  nn::os::UnlockMutex((MutexType *)(plVar14[5] + 0x28));
  (**(code **)PTR_DAT_04bcf450)(&local_a0);
  (**(code **)PTR_DAT_04bcf458)(&local_a0,1);
  (**(code **)PTR_DAT_04bcf448)(&local_a0,*(undefined8 *)(*(long *)puVar4 + 0x30));
  local_a4 = *(uint *)(param_1 + 0xd8);
  if (local_a4 == 0xffffffff) {
    (**(code **)puVar5)(puVar13,0x55,&local_a4);
  }
  (**(code **)PTR_DAT_04bcf468)(&local_a0,(long)(int)local_a4);
  local_a4 = *(uint *)(param_1 + 0xdc);
  if (local_a4 == 0xffffffff) {
    (**(code **)puVar5)(puVar13,0x52,&local_a4);
  }
  (**(code **)PTR_DAT_04bcf460)(&local_a0,(long)(int)local_a4);
  local_a4 = *(uint *)(param_1 + 0xe0);
  if (local_a4 == 0xffffffff) {
    (**(code **)puVar5)(puVar13,0x5c,&local_a4);
  }
  (**(code **)PTR_DAT_04bcf470)(&local_a0,(long)(int)local_a4);
  uVar16 = (**(code **)PTR_DAT_04bcf478)(&local_a0);
  uVar17 = (**(code **)(*param_2 + 0x30))(param_2,uVar16,0x1000);
  (**(code **)PTR_DAT_04bcf480)(&local_a0,uVar17,uVar16);
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(0x2000);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x2000,8);
  }
  *(void **)(param_1 + 0x1c8) = pvVar10;
  (**(code **)PTR_DAT_04bcf4e0)(pvVar10,&local_a0);
  *(undefined8 *)(*(long *)puVar4 + 0x38) = *(undefined8 *)(param_1 + 0x1c8);
  if (*(long *)puVar3 == 0) {
    plVar14 = malloc(0x60);
  }
  else {
    plVar14 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x60,8);
  }
  puVar6 = PTR_DAT_04bd0cf0;
  *(undefined4 *)(plVar14 + 4) = 0;
  plVar14[2] = 0;
  plVar14[3] = 0;
  *(undefined1 *)((long)plVar14 + 0x4a) = 0;
  plVar14[5] = 0;
  plVar14[6] = 0;
  *(undefined8 *)((long)plVar14 + 0x4c) = 0;
  *(undefined8 *)((long)plVar14 + 0x54) = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  *plVar14 = (long)(puVar6 + 0x10);
  plVar14[1] = 0;
  *(undefined2 *)(plVar14 + 9) = 0x201;
  *(long **)(param_1 + 0x158) = plVar14;
  nn::vi::GetNativeWindow(&local_a0,*(Layer **)(param_1 + 0x1e0));
  *(undefined **)(*(long *)(param_1 + 0x158) + 0x40) = local_a0;
  uVar1 = *(uint *)(param_1 + 0xa0);
  lVar12 = *(long *)(*(long *)(param_1 + 0x158) + 0x10);
  *(char *)(*(long *)(param_1 + 0x158) + 0x48) = (char)uVar1;
  if (lVar12 != 0) {
    (**(code **)PTR_DAT_04bcf5a8)(lVar12,uVar1 & 0xff);
  }
  uVar21 = 2;
  if (*(char *)(param_1 + 0xbd) != '\0') {
    uVar21 = 3;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x158) + 0x49) = uVar21;
  plVar14 = *(long **)(param_1 + 0x158);
  uVar24 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xb8));
  uVar23 = NEON_ucvtf(*(undefined4 *)(param_1 + 0xb4));
  *(undefined4 *)(plVar14 + 1) = uVar23;
  *(undefined4 *)((long)plVar14 + 0xc) = uVar24;
  (**(code **)(*plVar14 + 0x10))(plVar14,param_2);
  if (*(uint *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0x128) =
         (long)((((float)*(uint *)(param_1 + 0xa0) + 0.02) / 60.0) *
               (float)*(long *)PTR_DAT_04bb29d0);
  }
  *(undefined8 *)(*(long *)puVar4 + 0x50) = *(undefined8 *)(param_1 + 0x158);
  if (((DAT_05ae7220 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_05ae7220), iVar9 != 0)) {
    DAT_05ae7218 = (ulong)(*(int *)(param_1 + 0xc4) + 0x20) + 0xfff & 0x1fffff000;
    __cxa_guard_release(&DAT_05ae7220);
  }
  uVar16 = *(undefined8 *)(*(long *)puVar4 + 0x30);
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(0xa0);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0xa0,8);
  }
  *(void **)(param_1 + 0x188) = pvVar10;
  (**(code **)PTR_DAT_04bcf0c8)(pvVar10,uVar16);
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(0x100);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x100,8);
  }
  *(void **)(param_1 + 0x178) = pvVar10;
  (**(code **)PTR_DAT_04bcf610)(&local_a0);
  (**(code **)PTR_DAT_04bcf330)(&local_a0,uVar16);
  (**(code **)PTR_DAT_04bcf620)(&local_a0,0x12);
  sVar22 = DAT_05ae7218;
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(DAT_05ae7218);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,DAT_05ae7218,0x1000);
    sVar22 = DAT_05ae7218;
  }
  puVar7 = PTR_DAT_04bcf618;
  (**(code **)PTR_DAT_04bcf618)(&local_a0,pvVar10,sVar22);
  puVar6 = PTR_DAT_04bcf338;
  (**(code **)PTR_DAT_04bcf338)(*(undefined8 *)(param_1 + 0x178),&local_a0);
  local_a4 = 0;
  (**(code **)puVar5)(uVar16,0x14,&local_a4);
  uVar16 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined4 *)(param_1 + 200),local_a4);
  *(undefined8 *)(param_1 + 0x180) = uVar16;
  (**(code **)PTR_DAT_04bcf0d0)(*(undefined8 *)(param_1 + 0x188),&LAB_038b8b24);
  (**(code **)PTR_DAT_04bcf0d8)(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x188));
  *(undefined8 *)(*(long *)puVar4 + 0x40) = *(undefined8 *)(param_1 + 0x188);
  (**(code **)puVar5)(puVar13,0x19,&local_a4);
  (**(code **)puVar5)(puVar13,0x1a,&local_a8);
  (**(code **)puVar5)(puVar13,0x18,&local_ac);
  uVar1 = (local_a4 + local_ac * *(int *)(param_1 + 0xcc)) - 1;
  uVar2 = 0;
  if (local_a4 != 0) {
    uVar2 = uVar1 / local_a4;
  }
  uVar1 = uVar1 + local_a8 + ~(uVar1 - uVar2 * local_a4);
  uVar2 = 0;
  if (local_a8 != 0) {
    uVar2 = uVar1 / local_a8;
  }
  *(uint *)(param_1 + 0x1a8) = (uVar1 + ~(uVar1 - uVar2 * local_a8) & 0xfffff000) + 0x1000;
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(0x100);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x100,8);
  }
  *(void **)(param_1 + 0x1a0) = pvVar10;
  (**(code **)PTR_DAT_04bcf610)(&local_a0);
  (**(code **)PTR_DAT_04bcf330)(&local_a0,*(undefined8 *)(*(long *)puVar4 + 0x30));
  (**(code **)PTR_DAT_04bcf620)(&local_a0,0x21);
  __size = (ulong)*(uint *)(param_1 + 0x1a8);
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(__size);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,__size,0x1000);
    __size = (ulong)*(uint *)(param_1 + 0x1a8);
  }
  (**(code **)puVar7)(&local_a0,pvVar10,__size);
  (**(code **)puVar6)(*(undefined8 *)(param_1 + 0x1a0),&local_a0);
  (**(code **)PTR_DAT_04bbd7b8)(&local_a0,*(undefined8 *)(*(long *)puVar4 + 0x30));
  (**(code **)PTR_DAT_04bbd7b0)(&local_a0);
  (**(code **)PTR_DAT_04bbd7c8)
            (&local_a0,*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0xc4),0x20);
  if (*(long *)puVar3 == 0) {
    pvVar10 = malloc(0x30);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x30,8);
  }
  *(void **)(param_1 + 400) = pvVar10;
  (**(code **)PTR_DAT_04bbd7d0)(pvVar10,&local_a0);
  uVar16 = (**(code **)PTR_DAT_04bcf038)(*(undefined8 *)(param_1 + 400));
  lVar12 = *(long *)puVar3;
  *(undefined8 *)(param_1 + 0x198) = uVar16;
  if (lVar12 == 0) {
    pvVar10 = malloc(0x40);
  }
  else {
    pvVar10 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
  }
  *(void **)(param_1 + 0x1f0) = pvVar10;
  (**(code **)PTR_DAT_04bcff20)(pvVar10,puVar13);
  if (*(char *)(param_1 + 0xbc) != '\0') {
    uVar16 = FUN_038c1ee0(param_2,param_3,*(undefined4 *)(param_1 + 0xb4),
                          *(undefined4 *)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0x100) = uVar16;
  }
  if (*(long *)puVar3 == 0) {
    plVar14 = malloc(0x110);
    local_a0 = PTR_DAT_04bb2020 + 0x10;
  }
  else {
    plVar14 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x110,8);
    local_a0 = PTR_DAT_04bb2020 + 0x10;
    local_98 = "Presentation Thread";
    if (*(long *)puVar3 != 0) {
      puVar18 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x20,8);
      goto code_r0x038b89d0;
    }
  }
  local_98 = "Presentation Thread";
  puVar18 = malloc(0x20);
code_r0x038b89d0:
  puVar18[2] = &LAB_038b8b28;
  puVar18[3] = 0;
  *puVar18 = &PTR_LAB_04b637d0;
  puVar18[1] = param_1;
  FUN_038e1f88(plVar14,&local_a0,param_2,*(undefined4 *)(param_1 + 0xec),0,0x7fffffff,0x10000,0x20);
  puVar3 = PTR_DAT_04bd0e60;
  plVar14[0x21] = (long)puVar18;
  *plVar14 = (long)(puVar3 + 0x10);
  *(long **)(param_1 + 0x1e8) = plVar14;
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
  *(undefined4 *)(plVar14 + 0x1a) = 2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar14[0x1d],-1,2);
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x30))();
  return;
}

